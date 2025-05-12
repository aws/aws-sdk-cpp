/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/supplychain/SupplyChain_EXPORTS.h>
#include <aws/supplychain/model/DataIntegrationEventDatasetLoadStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SupplyChain
{
namespace Model
{

  /**
   * <p>The target dataset load execution details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/supplychain-2024-01-01/DataIntegrationEventDatasetLoadExecutionDetails">AWS
   * API Reference</a></p>
   */
  class DataIntegrationEventDatasetLoadExecutionDetails
  {
  public:
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetLoadExecutionDetails() = default;
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetLoadExecutionDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API DataIntegrationEventDatasetLoadExecutionDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SUPPLYCHAIN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The event load execution status to target dataset.</p>
     */
    inline DataIntegrationEventDatasetLoadStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataIntegrationEventDatasetLoadStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataIntegrationEventDatasetLoadExecutionDetails& WithStatus(DataIntegrationEventDatasetLoadStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The failure message (if any) of failed event load execution to dataset.</p>
     */
    inline const Aws::String& GetMessage() const { return m_message; }
    inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
    template<typename MessageT = Aws::String>
    void SetMessage(MessageT&& value) { m_messageHasBeenSet = true; m_message = std::forward<MessageT>(value); }
    template<typename MessageT = Aws::String>
    DataIntegrationEventDatasetLoadExecutionDetails& WithMessage(MessageT&& value) { SetMessage(std::forward<MessageT>(value)); return *this;}
    ///@}
  private:

    DataIntegrationEventDatasetLoadStatus m_status{DataIntegrationEventDatasetLoadStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_message;
    bool m_messageHasBeenSet = false;
  };

} // namespace Model
} // namespace SupplyChain
} // namespace Aws
