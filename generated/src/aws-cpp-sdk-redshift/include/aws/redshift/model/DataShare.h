/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/DataShareAssociation.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  class DataShare
  {
  public:
    AWS_REDSHIFT_API DataShare();
    AWS_REDSHIFT_API DataShare(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DataShare& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline void SetDataShareArn(const char* value) { m_dataShareArnHasBeenSet = true; m_dataShareArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline DataShare& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline DataShare& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline DataShare& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline const Aws::String& GetProducerArn() const{ return m_producerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline bool ProducerArnHasBeenSet() const { return m_producerArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline void SetProducerArn(const Aws::String& value) { m_producerArnHasBeenSet = true; m_producerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline void SetProducerArn(Aws::String&& value) { m_producerArnHasBeenSet = true; m_producerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline void SetProducerArn(const char* value) { m_producerArnHasBeenSet = true; m_producerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline DataShare& WithProducerArn(const Aws::String& value) { SetProducerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline DataShare& WithProducerArn(Aws::String&& value) { SetProducerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline DataShare& WithProducerArn(const char* value) { SetProducerArn(value); return *this;}


    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline bool GetAllowPubliclyAccessibleConsumers() const{ return m_allowPubliclyAccessibleConsumers; }

    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline bool AllowPubliclyAccessibleConsumersHasBeenSet() const { return m_allowPubliclyAccessibleConsumersHasBeenSet; }

    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline void SetAllowPubliclyAccessibleConsumers(bool value) { m_allowPubliclyAccessibleConsumersHasBeenSet = true; m_allowPubliclyAccessibleConsumers = value; }

    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline DataShare& WithAllowPubliclyAccessibleConsumers(bool value) { SetAllowPubliclyAccessibleConsumers(value); return *this;}


    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline const Aws::Vector<DataShareAssociation>& GetDataShareAssociations() const{ return m_dataShareAssociations; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline bool DataShareAssociationsHasBeenSet() const { return m_dataShareAssociationsHasBeenSet; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline void SetDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations = value; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline void SetDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations = std::move(value); }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline DataShare& WithDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { SetDataShareAssociations(value); return *this;}

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline DataShare& WithDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { SetDataShareAssociations(std::move(value)); return *this;}

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline DataShare& AddDataShareAssociations(const DataShareAssociation& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations.push_back(value); return *this; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline DataShare& AddDataShareAssociations(DataShareAssociation&& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline void SetManagedBy(const Aws::String& value) { m_managedByHasBeenSet = true; m_managedBy = value; }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline void SetManagedBy(Aws::String&& value) { m_managedByHasBeenSet = true; m_managedBy = std::move(value); }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline void SetManagedBy(const char* value) { m_managedByHasBeenSet = true; m_managedBy.assign(value); }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline DataShare& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline DataShare& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline DataShare& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline bool ResponseMetadataHasBeenSet() const { return m_responseMetadataHasBeenSet; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::move(value); }

    
    inline DataShare& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline DataShare& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet = false;

    Aws::String m_producerArn;
    bool m_producerArnHasBeenSet = false;

    bool m_allowPubliclyAccessibleConsumers;
    bool m_allowPubliclyAccessibleConsumersHasBeenSet = false;

    Aws::Vector<DataShareAssociation> m_dataShareAssociations;
    bool m_dataShareAssociationsHasBeenSet = false;

    Aws::String m_managedBy;
    bool m_managedByHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
