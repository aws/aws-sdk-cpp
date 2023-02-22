/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/model/ScheduledAction.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{
  class UpdateScheduledActionResult
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionResult();
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Information about the rescheduled action.</p>
     */
    inline const ScheduledAction& GetScheduledAction() const{ return m_scheduledAction; }

    /**
     * <p>Information about the rescheduled action.</p>
     */
    inline void SetScheduledAction(const ScheduledAction& value) { m_scheduledAction = value; }

    /**
     * <p>Information about the rescheduled action.</p>
     */
    inline void SetScheduledAction(ScheduledAction&& value) { m_scheduledAction = std::move(value); }

    /**
     * <p>Information about the rescheduled action.</p>
     */
    inline UpdateScheduledActionResult& WithScheduledAction(const ScheduledAction& value) { SetScheduledAction(value); return *this;}

    /**
     * <p>Information about the rescheduled action.</p>
     */
    inline UpdateScheduledActionResult& WithScheduledAction(ScheduledAction&& value) { SetScheduledAction(std::move(value)); return *this;}

  private:

    ScheduledAction m_scheduledAction;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
