/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
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
namespace MTurk
{
namespace Model
{
  class GetFileUploadURLResult
  {
  public:
    AWS_MTURK_API GetFileUploadURLResult() = default;
    AWS_MTURK_API GetFileUploadURLResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MTURK_API GetFileUploadURLResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A temporary URL for the file that the Worker uploaded for the answer. </p>
     */
    inline const Aws::String& GetFileUploadURL() const { return m_fileUploadURL; }
    template<typename FileUploadURLT = Aws::String>
    void SetFileUploadURL(FileUploadURLT&& value) { m_fileUploadURLHasBeenSet = true; m_fileUploadURL = std::forward<FileUploadURLT>(value); }
    template<typename FileUploadURLT = Aws::String>
    GetFileUploadURLResult& WithFileUploadURL(FileUploadURLT&& value) { SetFileUploadURL(std::forward<FileUploadURLT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetFileUploadURLResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_fileUploadURL;
    bool m_fileUploadURLHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
