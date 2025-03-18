/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-scep/PcaConnectorScep_EXPORTS.h>
#include <aws/pca-connector-scep/PcaConnectorScepRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace PcaConnectorScep
{
namespace Model
{

  /**
   */
  class GetChallengeMetadataRequest : public PcaConnectorScepRequest
  {
  public:
    AWS_PCACONNECTORSCEP_API GetChallengeMetadataRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChallengeMetadata"; }

    AWS_PCACONNECTORSCEP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the challenge.</p>
     */
    inline const Aws::String& GetChallengeArn() const { return m_challengeArn; }
    inline bool ChallengeArnHasBeenSet() const { return m_challengeArnHasBeenSet; }
    template<typename ChallengeArnT = Aws::String>
    void SetChallengeArn(ChallengeArnT&& value) { m_challengeArnHasBeenSet = true; m_challengeArn = std::forward<ChallengeArnT>(value); }
    template<typename ChallengeArnT = Aws::String>
    GetChallengeMetadataRequest& WithChallengeArn(ChallengeArnT&& value) { SetChallengeArn(std::forward<ChallengeArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_challengeArn;
    bool m_challengeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
