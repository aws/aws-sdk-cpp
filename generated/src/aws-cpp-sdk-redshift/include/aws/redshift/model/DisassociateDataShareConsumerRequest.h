/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/RedshiftRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Redshift
{
namespace Model
{

  /**
   */
  class DisassociateDataShareConsumerRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API DisassociateDataShareConsumerRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateDataShareConsumer"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare to remove association
     * for.</p>
     */
    inline const Aws::String& GetDataShareArn() const { return m_dataShareArn; }
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }
    template<typename DataShareArnT = Aws::String>
    void SetDataShareArn(DataShareArnT&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::forward<DataShareArnT>(value); }
    template<typename DataShareArnT = Aws::String>
    DisassociateDataShareConsumerRequest& WithDataShareArn(DataShareArnT&& value) { SetDataShareArn(std::forward<DataShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether association for the datashare is removed from
     * the entire account.</p>
     */
    inline bool GetDisassociateEntireAccount() const { return m_disassociateEntireAccount; }
    inline bool DisassociateEntireAccountHasBeenSet() const { return m_disassociateEntireAccountHasBeenSet; }
    inline void SetDisassociateEntireAccount(bool value) { m_disassociateEntireAccountHasBeenSet = true; m_disassociateEntireAccount = value; }
    inline DisassociateDataShareConsumerRequest& WithDisassociateEntireAccount(bool value) { SetDisassociateEntireAccount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the consumer namespace that association for
     * the datashare is removed from.</p>
     */
    inline const Aws::String& GetConsumerArn() const { return m_consumerArn; }
    inline bool ConsumerArnHasBeenSet() const { return m_consumerArnHasBeenSet; }
    template<typename ConsumerArnT = Aws::String>
    void SetConsumerArn(ConsumerArnT&& value) { m_consumerArnHasBeenSet = true; m_consumerArn = std::forward<ConsumerArnT>(value); }
    template<typename ConsumerArnT = Aws::String>
    DisassociateDataShareConsumerRequest& WithConsumerArn(ConsumerArnT&& value) { SetConsumerArn(std::forward<ConsumerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>From a datashare consumer account, removes association of a datashare from
     * all the existing and future namespaces in the specified Amazon Web Services
     * Region.</p>
     */
    inline const Aws::String& GetConsumerRegion() const { return m_consumerRegion; }
    inline bool ConsumerRegionHasBeenSet() const { return m_consumerRegionHasBeenSet; }
    template<typename ConsumerRegionT = Aws::String>
    void SetConsumerRegion(ConsumerRegionT&& value) { m_consumerRegionHasBeenSet = true; m_consumerRegion = std::forward<ConsumerRegionT>(value); }
    template<typename ConsumerRegionT = Aws::String>
    DisassociateDataShareConsumerRequest& WithConsumerRegion(ConsumerRegionT&& value) { SetConsumerRegion(std::forward<ConsumerRegionT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet = false;

    bool m_disassociateEntireAccount{false};
    bool m_disassociateEntireAccountHasBeenSet = false;

    Aws::String m_consumerArn;
    bool m_consumerArnHasBeenSet = false;

    Aws::String m_consumerRegion;
    bool m_consumerRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
