/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/AmazonWebServiceRequest.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/stream/ResponseStream.h>
#include <smithy/tracing/TraceSpan.h>
#include <smithy/tracing/TracingUtils.h>

#include <atomic>
#include <functional>
#include <memory>
#include <type_traits>
#include <utility>

namespace Aws
{
    namespace Utils
    {
        namespace Threading
        {
            class Executor;
        }
    }

    namespace Client
    {
        class AWS_CORE_API OperationTelemetry
        {
        public:
            OperationTelemetry(std::shared_ptr<smithy::components::tracing::TraceSpan> span,
                               const Aws::String& metricName,
                               const std::shared_ptr<smithy::components::tracing::Meter>& meter,
                               Aws::Map<Aws::String, Aws::String>&& attributes);
            ~OperationTelemetry();

            OperationTelemetry(const OperationTelemetry&) = delete;
            OperationTelemetry& operator=(const OperationTelemetry&) = delete;

        private:
            std::shared_ptr<smithy::components::tracing::TraceSpan> m_span;
            smithy::components::tracing::TracingUtils::ScopedMetricTimer m_durationTimer;
        };

        class RequestLifetimeExtension;

        class AWS_CORE_API AsyncOperationState
        {
        public:
            explicit AsyncOperationState(std::shared_ptr<Utils::Threading::Executor> executor);
            virtual ~AsyncOperationState();

            AsyncOperationState(const AsyncOperationState&) = delete;
            AsyncOperationState& operator=(const AsyncOperationState&) = delete;

            static bool IsAsyncIOEnabled();

            const std::shared_ptr<Utils::Threading::Executor>& GetExecutor() const;

            void AdoptTelemetry(Aws::UniquePtr<OperationTelemetry> telemetry, bool conversionOutsideTiming);
            void ExtendRequestLifetime();
            bool TryTake();
            bool IsTaken() const;

            template<typename T>
            static T MakeCallWithTiming(const AmazonWebServiceRequest& request,
                                        std::shared_ptr<smithy::components::tracing::TraceSpan> span,
                                        std::function<T()> func,
                                        const Aws::String& metricName,
                                        const std::shared_ptr<smithy::components::tracing::Meter>& meter,
                                        Aws::Map<Aws::String, Aws::String>&& attributes)
            {
                const auto state = request.GetAsyncOperationState();
                if (!state)
                {
                    return smithy::components::tracing::TracingUtils::MakeCallWithTiming<T>(std::move(func), metricName, *meter, std::move(attributes));
                }
                state->AdoptTelemetry(Aws::MakeUnique<OperationTelemetry>("AsyncOperationState", span, metricName, meter, std::move(attributes)),
                    IsServiceResultOutcome<T>::value);
                auto returnValue = func();
                span->releaseScope();
                return returnValue;
            }

        protected:
            void BindRequest(std::shared_ptr<AmazonWebServiceRequest> request);
            void EndTelemetryBeforeConversion();
            void EndOperation();

        private:
            template<typename T>
            struct IsServiceResultOutcome : std::false_type {};

            template<typename ResultT, typename ErrorT>
            struct IsServiceResultOutcome<Utils::Outcome<AmazonWebServiceResult<ResultT>, ErrorT>> : std::true_type {};

            std::shared_ptr<Utils::Threading::Executor> m_executor;
            std::shared_ptr<AmazonWebServiceRequest> m_request;
            Aws::UniquePtr<OperationTelemetry> m_telemetry;
            bool m_conversionOutsideTiming = false;
            Aws::UniquePtr<RequestLifetimeExtension> m_requestLifetimeExtension;
            std::atomic<bool> m_taken{false};
        };

        template<typename ProtocolOutcomeT>
        class ProtocolAsyncOperationState : public AsyncOperationState
        {
        public:
            explicit ProtocolAsyncOperationState(std::shared_ptr<Utils::Threading::Executor> executor)
                : AsyncOperationState(std::move(executor))
            {
            }

            static std::shared_ptr<ProtocolAsyncOperationState> Take(const AmazonWebServiceRequest& request)
            {
                const auto state = request.GetAsyncOperationState();
                return state && state->TryTake() ? std::static_pointer_cast<ProtocolAsyncOperationState>(state) : nullptr;
            }

            virtual void Complete(ProtocolOutcomeT&& outcome) = 0;
        };

        template<typename OutcomeT, typename ProtocolOutcomeT>
        class OutcomeAsyncOperationState : public ProtocolAsyncOperationState<ProtocolOutcomeT>
        {
        public:
            explicit OutcomeAsyncOperationState(std::shared_ptr<Utils::Threading::Executor> executor)
                : ProtocolAsyncOperationState<ProtocolOutcomeT>(std::move(executor))
            {
            }

            void Bind(std::shared_ptr<AmazonWebServiceRequest> request, std::function<void(OutcomeT&&)> deliver)
            {
                this->BindRequest(std::move(request));
                m_deliver = std::move(deliver);
            }

            void Complete(ProtocolOutcomeT&& outcome) override
            {
                this->EndTelemetryBeforeConversion();
                Deliver(outcome.IsSuccess() ? OutcomeT(outcome.GetResultWithOwnership()) : OutcomeT(std::move(outcome.GetError())));
            }

            void Deliver(OutcomeT&& outcome)
            {
                this->EndOperation();
                std::function<void(OutcomeT&&)> deliver;
                deliver.swap(m_deliver);
                deliver(std::move(outcome));
            }

        private:
            std::function<void(OutcomeT&&)> m_deliver;
        };

        template<typename RequestT>
        class AsyncOperationRequest final : public RequestT
        {
        public:
            AsyncOperationRequest(const RequestT& request, const std::shared_ptr<AsyncOperationState>& state)
                : RequestT(request),
                  m_state(state)
            {
            }

            std::shared_ptr<AsyncOperationState> GetAsyncOperationState() const override
            {
                const auto state = m_state.lock();
                return state && !state->IsTaken() ? state : nullptr;
            }

        private:
            std::weak_ptr<AsyncOperationState> m_state;
        };
    }
}
