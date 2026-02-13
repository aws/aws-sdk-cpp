/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <iterator>
#include <cstddef>
#include <memory>

namespace Aws
{
namespace Utils
{
namespace Pagination
{

template <class ServiceClient, class OperationRequest, class OperationTraits>
class Paginator
{
public:
    using OutcomeType = typename OperationTraits::OutcomeType;
    using ResultType = typename OperationTraits::ResultType;

private:
    struct State
    {
        explicit State(ServiceClient* c) : client(c) {}
        ServiceClient* client;
    };

public:
    class Iterator
    {
    public:
        using iterator_category = std::input_iterator_tag;
        using value_type = OutcomeType;
        using difference_type = std::ptrdiff_t;
        using pointer = const OutcomeType*;
        using reference = const OutcomeType&;

        Iterator(std::shared_ptr<State> state, const OperationRequest& firstReq)
            : m_state(std::move(state)),
              m_request(firstReq),
              m_currentOutcome(OperationTraits::Invoke(*m_state->client, m_request)),
              m_atEnd(false)
        {}

        Iterator(std::shared_ptr<State> state, bool atEnd)
            : m_state(std::move(state)),
              m_request{},
              m_currentOutcome{},
              m_atEnd(atEnd)
        {}

        const OutcomeType& operator*() const { return m_currentOutcome; }

        Iterator& operator++()
        {
            if (m_atEnd) return *this;

            if (!m_currentOutcome.IsSuccess())
            {
                m_atEnd = true;
                return *this;
            }

            if (!OperationTraits::HasMoreResults(m_currentOutcome.GetResult()))
            {
                m_atEnd = true;
                return *this;
            }

            OperationTraits::SetNextRequest(m_currentOutcome.GetResult(), m_request);
            Fetch();
            return *this;
        }

        friend bool operator==(const Iterator& lhs, const Iterator& rhs)
        {
            if (lhs.m_state.get() != rhs.m_state.get())
            {
                return false;
            }
            return lhs.m_atEnd == rhs.m_atEnd;
        }

        friend bool operator!=(const Iterator& lhs, const Iterator& rhs)
        {
            return !(lhs == rhs);
        }

    private:
        void Fetch()
        {
            m_currentOutcome = OperationTraits::Invoke(*m_state->client, m_request);
        }

        std::shared_ptr<State> m_state;
        OperationRequest m_request{};
        OutcomeType m_currentOutcome{};
        bool m_atEnd{false};
    };

    Paginator(ServiceClient& client, const OperationRequest& firstReq)
        : m_state(std::make_shared<State>(&client)),
          m_firstRequest(firstReq)
    {}

    Iterator begin() const { return Iterator(m_state, m_firstRequest); }
    Iterator end() const { return Iterator(m_state, true); }

private:
    std::shared_ptr<State> m_state;
    OperationRequest m_firstRequest{};
};

} // namespace Pagination
} // namespace Utils
} // namespace Aws