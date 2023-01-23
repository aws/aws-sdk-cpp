/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ResponseMetadata.h>
#include <aws/redshift/model/DataShareAssociation.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{
  class AssociateDataShareConsumerResult
  {
  public:
    AWS_REDSHIFT_API AssociateDataShareConsumerResult();
    AWS_REDSHIFT_API AssociateDataShareConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API AssociateDataShareConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


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
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArn = value; }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArn = std::move(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline void SetDataShareArn(const char* value) { m_dataShareArn.assign(value); }

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline AssociateDataShareConsumerResult& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline AssociateDataShareConsumerResult& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}

    /**
     * <p>An Amazon Resource Name (ARN) that references the datashare that is owned by
     * a specific namespace of the producer cluster. A datashare ARN is in the
     * <code>arn:aws:redshift:{region}:{account-id}:{datashare}:{namespace-guid}/{datashare-name}</code>
     * format.</p>
     */
    inline AssociateDataShareConsumerResult& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline const Aws::String& GetProducerArn() const{ return m_producerArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline void SetProducerArn(const Aws::String& value) { m_producerArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline void SetProducerArn(Aws::String&& value) { m_producerArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline void SetProducerArn(const char* value) { m_producerArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline AssociateDataShareConsumerResult& WithProducerArn(const Aws::String& value) { SetProducerArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline AssociateDataShareConsumerResult& WithProducerArn(Aws::String&& value) { SetProducerArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the producer.</p>
     */
    inline AssociateDataShareConsumerResult& WithProducerArn(const char* value) { SetProducerArn(value); return *this;}


    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline bool GetAllowPubliclyAccessibleConsumers() const{ return m_allowPubliclyAccessibleConsumers; }

    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline void SetAllowPubliclyAccessibleConsumers(bool value) { m_allowPubliclyAccessibleConsumers = value; }

    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline AssociateDataShareConsumerResult& WithAllowPubliclyAccessibleConsumers(bool value) { SetAllowPubliclyAccessibleConsumers(value); return *this;}


    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline const Aws::Vector<DataShareAssociation>& GetDataShareAssociations() const{ return m_dataShareAssociations; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline void SetDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { m_dataShareAssociations = value; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline void SetDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { m_dataShareAssociations = std::move(value); }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline AssociateDataShareConsumerResult& WithDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { SetDataShareAssociations(value); return *this;}

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline AssociateDataShareConsumerResult& WithDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { SetDataShareAssociations(std::move(value)); return *this;}

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline AssociateDataShareConsumerResult& AddDataShareAssociations(const DataShareAssociation& value) { m_dataShareAssociations.push_back(value); return *this; }

    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline AssociateDataShareConsumerResult& AddDataShareAssociations(DataShareAssociation&& value) { m_dataShareAssociations.push_back(std::move(value)); return *this; }


    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline void SetManagedBy(const Aws::String& value) { m_managedBy = value; }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline void SetManagedBy(Aws::String&& value) { m_managedBy = std::move(value); }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline void SetManagedBy(const char* value) { m_managedBy.assign(value); }

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline AssociateDataShareConsumerResult& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline AssociateDataShareConsumerResult& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}

    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline AssociateDataShareConsumerResult& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}


    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }

    
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }

    
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }

    
    inline AssociateDataShareConsumerResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}

    
    inline AssociateDataShareConsumerResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}

  private:

    Aws::String m_dataShareArn;

    Aws::String m_producerArn;

    bool m_allowPubliclyAccessibleConsumers;

    Aws::Vector<DataShareAssociation> m_dataShareAssociations;

    Aws::String m_managedBy;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
