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
  class GetChallengePasswordRequest : public PcaConnectorScepRequest
  {
  public:
    AWS_PCACONNECTORSCEP_API GetChallengePasswordRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "GetChallengePassword"; }

    AWS_PCACONNECTORSCEP_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the challenge.</p>
     */
    inline const Aws::String& GetChallengeArn() const{ return m_challengeArn; }
    inline bool ChallengeArnHasBeenSet() const { return m_challengeArnHasBeenSet; }
    inline void SetChallengeArn(const Aws::String& value) { m_challengeArnHasBeenSet = true; m_challengeArn = value; }
    inline void SetChallengeArn(Aws::String&& value) { m_challengeArnHasBeenSet = true; m_challengeArn = std::move(value); }
    inline void SetChallengeArn(const char* value) { m_challengeArnHasBeenSet = true; m_challengeArn.assign(value); }
    inline GetChallengePasswordRequest& WithChallengeArn(const Aws::String& value) { SetChallengeArn(value); return *this;}
    inline GetChallengePasswordRequest& WithChallengeArn(Aws::String&& value) { SetChallengeArn(std::move(value)); return *this;}
    inline GetChallengePasswordRequest& WithChallengeArn(const char* value) { SetChallengeArn(value); return *this;}
    ///@}
  private:

    Aws::String m_challengeArn;
    bool m_challengeArnHasBeenSet = false;
  };

} // namespace Model
} // namespace PcaConnectorScep
} // namespace Aws
