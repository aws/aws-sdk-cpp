/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rum/CloudWatchRUM_EXPORTS.h>
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
namespace CloudWatchRUM
{
namespace Model
{
  class CreateAppMonitorResult
  {
  public:
    AWS_CLOUDWATCHRUM_API CreateAppMonitorResult();
    AWS_CLOUDWATCHRUM_API CreateAppMonitorResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_CLOUDWATCHRUM_API CreateAppMonitorResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline CreateAppMonitorResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline CreateAppMonitorResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique ID of the new app monitor.</p>
     */
    inline CreateAppMonitorResult& WithId(const char* value) { SetId(value); return *this;}

  private:

    Aws::String m_id;
  };

} // namespace Model
} // namespace CloudWatchRUM
} // namespace Aws
