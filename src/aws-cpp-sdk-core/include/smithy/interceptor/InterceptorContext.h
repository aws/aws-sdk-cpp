/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/http/HttpRequest.h>
#include <aws/core/http/HttpResponse.h>
#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>

namespace smithy
{
    namespace interceptor
    {
        class InterceptorContext
        {
        public:
            InterceptorContext() = default;
            virtual ~InterceptorContext() = default;
            InterceptorContext(const InterceptorContext& other) = delete;
            InterceptorContext(InterceptorContext&& other) noexcept = default;
            InterceptorContext& operator=(const InterceptorContext& other) = delete;
            InterceptorContext& operator=(InterceptorContext&& other) noexcept = default;

            using GetRequestOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpRequest>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;
            GetRequestOutcome GetRequest() const
            {
                if (!m_request)
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{
                        Aws::Client::CoreErrors::RESOURCE_NOT_FOUND,
                        "ResourceNotFoundException",
                        "Request is NULL",
                        false
                    };
                }
                return m_request;
            }

            void SetRequest(const std::shared_ptr<Aws::Http::HttpRequest>& request)
            {
                this->m_request = request;
            }

            using GetResponseOutcome = Aws::Utils::Outcome<std::shared_ptr<Aws::Http::HttpResponse>, Aws::Client::AWSError<Aws::Client::CoreErrors>>;
            GetResponseOutcome GetResponse() const
            {
                if (!m_response)
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{
                        Aws::Client::CoreErrors::RESOURCE_NOT_FOUND,
                        "ResourceNotFoundException",
                        "Response is NULL",
                        false
                    };
                }
                return m_response;
            }

            void SetResponse(const std::shared_ptr<Aws::Http::HttpResponse>& response)
            {
                this->m_response = response;
            }

            using GetAttributeOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;
            GetAttributeOutcome GetAttribute(const Aws::String& attribute)
            {
                const auto attribute_iter = m_attributes.find(attribute);
                if (attribute_iter == m_attributes.end())
                {
                    return Aws::Client::AWSError<Aws::Client::CoreErrors>{
                        Aws::Client::CoreErrors::RESOURCE_NOT_FOUND,
                        "ResourceNotFoundException",
                        "Attribute not found",
                        false
                    };
                }
                return attribute_iter->second;
            }

            void SetAttribute(const Aws::String& attribute, const Aws::String& value)
            {
                m_attributes.emplace(attribute, value);
            }

        private:
            Aws::Map<Aws::String, Aws::String> m_attributes{};
            std::shared_ptr<Aws::Http::HttpRequest> m_request{nullptr};
            std::shared_ptr<Aws::Http::HttpResponse> m_response{nullptr};
        };
    }
}
