/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteActionConnectorRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteActionConnectorRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteActionConnector"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The Amazon Web Services account ID that contains the action connector to
     * delete.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    DeleteActionConnectorRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the action connector to delete.</p>
     */
    inline const Aws::String& GetActionConnectorId() const { return m_actionConnectorId; }
    inline bool ActionConnectorIdHasBeenSet() const { return m_actionConnectorIdHasBeenSet; }
    template<typename ActionConnectorIdT = Aws::String>
    void SetActionConnectorId(ActionConnectorIdT&& value) { m_actionConnectorIdHasBeenSet = true; m_actionConnectorId = std::forward<ActionConnectorIdT>(value); }
    template<typename ActionConnectorIdT = Aws::String>
    DeleteActionConnectorRequest& WithActionConnectorId(ActionConnectorIdT&& value) { SetActionConnectorId(std::forward<ActionConnectorIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_actionConnectorId;
    bool m_actionConnectorIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
