/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/signer/Signer_EXPORTS.h>
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
namespace signer
{
namespace Model
{
  class PutSigningProfileResult
  {
  public:
    AWS_SIGNER_API PutSigningProfileResult() = default;
    AWS_SIGNER_API PutSigningProfileResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SIGNER_API PutSigningProfileResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the signing profile created.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    PutSigningProfileResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the signing profile being created.</p>
     */
    inline const Aws::String& GetProfileVersion() const { return m_profileVersion; }
    template<typename ProfileVersionT = Aws::String>
    void SetProfileVersion(ProfileVersionT&& value) { m_profileVersionHasBeenSet = true; m_profileVersion = std::forward<ProfileVersionT>(value); }
    template<typename ProfileVersionT = Aws::String>
    PutSigningProfileResult& WithProfileVersion(ProfileVersionT&& value) { SetProfileVersion(std::forward<ProfileVersionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The signing profile ARN, including the profile version.</p>
     */
    inline const Aws::String& GetProfileVersionArn() const { return m_profileVersionArn; }
    template<typename ProfileVersionArnT = Aws::String>
    void SetProfileVersionArn(ProfileVersionArnT&& value) { m_profileVersionArnHasBeenSet = true; m_profileVersionArn = std::forward<ProfileVersionArnT>(value); }
    template<typename ProfileVersionArnT = Aws::String>
    PutSigningProfileResult& WithProfileVersionArn(ProfileVersionArnT&& value) { SetProfileVersionArn(std::forward<ProfileVersionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    PutSigningProfileResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_profileVersion;
    bool m_profileVersionHasBeenSet = false;

    Aws::String m_profileVersionArn;
    bool m_profileVersionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace signer
} // namespace Aws
