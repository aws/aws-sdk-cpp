/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/snowball/Snowball_EXPORTS.h>
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
namespace Snowball
{
namespace Model
{
  class GetSoftwareUpdatesResult
  {
  public:
    AWS_SNOWBALL_API GetSoftwareUpdatesResult() = default;
    AWS_SNOWBALL_API GetSoftwareUpdatesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetSoftwareUpdatesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon S3 presigned URL for the update file associated with the specified
     * <code>JobId</code> value. The software update will be available for 2 days after
     * this request is made. To access an update after the 2 days have passed, you'll
     * have to make another call to <code>GetSoftwareUpdates</code>.</p>
     */
    inline const Aws::String& GetUpdatesURI() const { return m_updatesURI; }
    template<typename UpdatesURIT = Aws::String>
    void SetUpdatesURI(UpdatesURIT&& value) { m_updatesURIHasBeenSet = true; m_updatesURI = std::forward<UpdatesURIT>(value); }
    template<typename UpdatesURIT = Aws::String>
    GetSoftwareUpdatesResult& WithUpdatesURI(UpdatesURIT&& value) { SetUpdatesURI(std::forward<UpdatesURIT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSoftwareUpdatesResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_updatesURI;
    bool m_updatesURIHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
