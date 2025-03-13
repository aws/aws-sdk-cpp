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
  class GetJobManifestResult
  {
  public:
    AWS_SNOWBALL_API GetJobManifestResult() = default;
    AWS_SNOWBALL_API GetJobManifestResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetJobManifestResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon S3 presigned URL for the manifest file associated with the
     * specified <code>JobId</code> value.</p>
     */
    inline const Aws::String& GetManifestURI() const { return m_manifestURI; }
    template<typename ManifestURIT = Aws::String>
    void SetManifestURI(ManifestURIT&& value) { m_manifestURIHasBeenSet = true; m_manifestURI = std::forward<ManifestURIT>(value); }
    template<typename ManifestURIT = Aws::String>
    GetJobManifestResult& WithManifestURI(ManifestURIT&& value) { SetManifestURI(std::forward<ManifestURIT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobManifestResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_manifestURI;
    bool m_manifestURIHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
