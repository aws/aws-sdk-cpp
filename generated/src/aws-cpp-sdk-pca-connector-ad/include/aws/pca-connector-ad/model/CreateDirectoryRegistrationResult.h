/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
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
namespace PcaConnectorAd
{
namespace Model
{
  class CreateDirectoryRegistrationResult
  {
  public:
    AWS_PCACONNECTORAD_API CreateDirectoryRegistrationResult() = default;
    AWS_PCACONNECTORAD_API CreateDirectoryRegistrationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_PCACONNECTORAD_API CreateDirectoryRegistrationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline const Aws::String& GetDirectoryRegistrationArn() const { return m_directoryRegistrationArn; }
    template<typename DirectoryRegistrationArnT = Aws::String>
    void SetDirectoryRegistrationArn(DirectoryRegistrationArnT&& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = std::forward<DirectoryRegistrationArnT>(value); }
    template<typename DirectoryRegistrationArnT = Aws::String>
    CreateDirectoryRegistrationResult& WithDirectoryRegistrationArn(DirectoryRegistrationArnT&& value) { SetDirectoryRegistrationArn(std::forward<DirectoryRegistrationArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateDirectoryRegistrationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryRegistrationArn;
    bool m_directoryRegistrationArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
