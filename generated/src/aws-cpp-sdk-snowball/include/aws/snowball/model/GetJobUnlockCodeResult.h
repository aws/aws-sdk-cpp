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
  class GetJobUnlockCodeResult
  {
  public:
    AWS_SNOWBALL_API GetJobUnlockCodeResult() = default;
    AWS_SNOWBALL_API GetJobUnlockCodeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SNOWBALL_API GetJobUnlockCodeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>UnlockCode</code> value for the specified job. The
     * <code>UnlockCode</code> value can be accessed for up to 360 days after the job
     * has been created.</p>
     */
    inline const Aws::String& GetUnlockCode() const { return m_unlockCode; }
    template<typename UnlockCodeT = Aws::String>
    void SetUnlockCode(UnlockCodeT&& value) { m_unlockCodeHasBeenSet = true; m_unlockCode = std::forward<UnlockCodeT>(value); }
    template<typename UnlockCodeT = Aws::String>
    GetJobUnlockCodeResult& WithUnlockCode(UnlockCodeT&& value) { SetUnlockCode(std::forward<UnlockCodeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetJobUnlockCodeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_unlockCode;
    bool m_unlockCodeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Snowball
} // namespace Aws
