/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ScheduledActionResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace RedshiftServerless
{
namespace Model
{
  class UpdateScheduledActionResult
  {
  public:
    AWS_REDSHIFTSERVERLESS_API UpdateScheduledActionResult();
    AWS_REDSHIFTSERVERLESS_API UpdateScheduledActionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_REDSHIFTSERVERLESS_API UpdateScheduledActionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The ScheduledAction object that was updated.</p>
     */
    inline const ScheduledActionResponse& GetScheduledAction() const{ return m_scheduledAction; }

    /**
     * <p>The ScheduledAction object that was updated.</p>
     */
    inline void SetScheduledAction(const ScheduledActionResponse& value) { m_scheduledAction = value; }

    /**
     * <p>The ScheduledAction object that was updated.</p>
     */
    inline void SetScheduledAction(ScheduledActionResponse&& value) { m_scheduledAction = std::move(value); }

    /**
     * <p>The ScheduledAction object that was updated.</p>
     */
    inline UpdateScheduledActionResult& WithScheduledAction(const ScheduledActionResponse& value) { SetScheduledAction(value); return *this;}

    /**
     * <p>The ScheduledAction object that was updated.</p>
     */
    inline UpdateScheduledActionResult& WithScheduledAction(ScheduledActionResponse&& value) { SetScheduledAction(std::move(value)); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdateScheduledActionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdateScheduledActionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdateScheduledActionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ScheduledActionResponse m_scheduledAction;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace RedshiftServerless
} // namespace Aws
