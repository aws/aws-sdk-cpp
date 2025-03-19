/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/PcaConnectorAdRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorAd
{
namespace Model
{

  /**
   */
  class GetDirectoryRegistrationRequest : public PcaConnectorAdRequest
  {
  public:
    AWS_PCACONNECTORAD_API GetDirectoryRegistrationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetDirectoryRegistration"; }

    AWS_PCACONNECTORAD_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that was returned when you called <a
     * href="https://docs.aws.amazon.com/pca-connector-ad/latest/APIReference/API_CreateDirectoryRegistration.html">CreateDirectoryRegistration</a>.</p>
     */
    inline const Aws::String& GetDirectoryRegistrationArn() const { return m_directoryRegistrationArn; }
    inline bool DirectoryRegistrationArnHasBeenSet() const { return m_directoryRegistrationArnHasBeenSet; }
    template<typename DirectoryRegistrationArnT = Aws::String>
    void SetDirectoryRegistrationArn(DirectoryRegistrationArnT&& value) { m_directoryRegistrationArnHasBeenSet = true; m_directoryRegistrationArn = std::forward<DirectoryRegistrationArnT>(value); }
    template<typename DirectoryRegistrationArnT = Aws::String>
    GetDirectoryRegistrationRequest& WithDirectoryRegistrationArn(DirectoryRegistrationArnT&& value) { SetDirectoryRegistrationArn(std::forward<DirectoryRegistrationArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_directoryRegistrationArn;
    bool m_directoryRegistrationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorAd
} // namespace Aws
