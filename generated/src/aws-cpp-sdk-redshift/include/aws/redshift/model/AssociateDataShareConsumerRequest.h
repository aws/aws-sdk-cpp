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
  class AssociateDataShareConsumerRequest : public RedshiftRequest
  {
  public:
    AWS_REDSHIFT_API AssociateDataShareConsumerRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AssociateDataShareConsumer"; }

    AWS_REDSHIFT_API Aws::String SerializePayload() const override;

  protected:
    AWS_REDSHIFT_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline void SetDataShareArn(const char* value) { m_dataShareArnHasBeenSet = true; m_dataShareArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline AssociateDataShareConsumerRequest& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline AssociateDataShareConsumerRequest& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to use
     * with the account or the namespace.</p>
     */
    inline AssociateDataShareConsumerRequest& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}


    /**
     * <p>A value that specifies whether the datashare is associated with the entire
     * account.</p>
     */
    inline bool GetAssociateEntireAccount() const{ return m_associateEntireAccount; }

    /**
     * <p>A value that specifies whether the datashare is associated with the entire
     * account.</p>
     */
    inline bool AssociateEntireAccountHasBeenSet() const { return m_associateEntireAccountHasBeenSet; }

    /**
     * <p>A value that specifies whether the datashare is associated with the entire
     * account.</p>
     */
    inline void SetAssociateEntireAccount(bool value) { m_associateEntireAccountHasBeenSet = true; m_associateEntireAccount = value; }

    /**
     * <p>A value that specifies whether the datashare is associated with the entire
     * account.</p>
     */
    inline AssociateDataShareConsumerRequest& WithAssociateEntireAccount(bool value) { SetAssociateEntireAccount(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline const Aws::String& GetConsumerArn() const{ return m_consumerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline bool ConsumerArnHasBeenSet() const { return m_consumerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline void SetConsumerArn(const Aws::String& value) { m_consumerArnHasBeenSet = true; m_consumerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline void SetConsumerArn(Aws::String&& value) { m_consumerArnHasBeenSet = true; m_consumerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline void SetConsumerArn(const char* value) { m_consumerArnHasBeenSet = true; m_consumerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline AssociateDataShareConsumerRequest& WithConsumerArn(const Aws::String& value) { SetConsumerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline AssociateDataShareConsumerRequest& WithConsumerArn(Aws::String&& value) { SetConsumerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the consumer that is associated with the
     * datashare.</p>
     */
    inline AssociateDataShareConsumerRequest& WithConsumerArn(const char* value) { SetConsumerArn(value); return *this;}


    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetConsumerRegion() const{ return m_consumerRegion; }

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline bool ConsumerRegionHasBeenSet() const { return m_consumerRegionHasBeenSet; }

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline void SetConsumerRegion(const Aws::String& value) { m_consumerRegionHasBeenSet = true; m_consumerRegion = value; }

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline void SetConsumerRegion(Aws::String&& value) { m_consumerRegionHasBeenSet = true; m_consumerRegion = std::move(value); }

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline void SetConsumerRegion(const char* value) { m_consumerRegionHasBeenSet = true; m_consumerRegion.assign(value); }

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline AssociateDataShareConsumerRequest& WithConsumerRegion(const Aws::String& value) { SetConsumerRegion(value); return *this;}

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline AssociateDataShareConsumerRequest& WithConsumerRegion(Aws::String&& value) { SetConsumerRegion(std::move(value)); return *this;}

    /**
     * <p>From a datashare consumer account, associates a datashare with all existing
     * and future namespaces in the specified Amazon Web Services Region.</p>
     */
    inline AssociateDataShareConsumerRequest& WithConsumerRegion(const char* value) { SetConsumerRegion(value); return *this;}

  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet = false;

    bool m_associateEntireAccount;
    bool m_associateEntireAccountHasBeenSet = false;

    Aws::String m_consumerArn;
    bool m_consumerArnHasBeenSet = false;

    Aws::String m_consumerRegion;
    bool m_consumerRegionHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
