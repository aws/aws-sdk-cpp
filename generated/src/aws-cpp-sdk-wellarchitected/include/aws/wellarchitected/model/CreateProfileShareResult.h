/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
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
namespace WellArchitected
{
namespace Model
{
  class CreateProfileShareResult
  {
  public:
    AWS_WELLARCHITECTED_API CreateProfileShareResult() = default;
    AWS_WELLARCHITECTED_API CreateProfileShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API CreateProfileShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetShareId() const { return m_shareId; }
    template<typename ShareIdT = Aws::String>
    void SetShareId(ShareIdT&& value) { m_shareIdHasBeenSet = true; m_shareId = std::forward<ShareIdT>(value); }
    template<typename ShareIdT = Aws::String>
    CreateProfileShareResult& WithShareId(ShareIdT&& value) { SetShareId(std::forward<ShareIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profile ARN.</p>
     */
    inline const Aws::String& GetProfileArn() const { return m_profileArn; }
    template<typename ProfileArnT = Aws::String>
    void SetProfileArn(ProfileArnT&& value) { m_profileArnHasBeenSet = true; m_profileArn = std::forward<ProfileArnT>(value); }
    template<typename ProfileArnT = Aws::String>
    CreateProfileShareResult& WithProfileArn(ProfileArnT&& value) { SetProfileArn(std::forward<ProfileArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateProfileShareResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_shareId;
    bool m_shareIdHasBeenSet = false;

    Aws::String m_profileArn;
    bool m_profileArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
