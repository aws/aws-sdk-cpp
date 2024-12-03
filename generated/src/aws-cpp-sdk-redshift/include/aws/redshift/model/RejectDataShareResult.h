/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/DataShareType.h>
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
  class RejectDataShareResult
  {
  public:
    AWS_REDSHIFT_API RejectDataShareResult();
    AWS_REDSHIFT_API RejectDataShareResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API RejectDataShareResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to
     * use.</p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArn = value; }
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArn = std::move(value); }
    inline void SetDataShareArn(const char* value) { m_dataShareArn.assign(value); }
    inline RejectDataShareResult& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}
    inline RejectDataShareResult& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}
    inline RejectDataShareResult& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the producer namespace.</p>
     */
    inline const Aws::String& GetProducerArn() const{ return m_producerArn; }
    inline void SetProducerArn(const Aws::String& value) { m_producerArn = value; }
    inline void SetProducerArn(Aws::String&& value) { m_producerArn = std::move(value); }
    inline void SetProducerArn(const char* value) { m_producerArn.assign(value); }
    inline RejectDataShareResult& WithProducerArn(const Aws::String& value) { SetProducerArn(value); return *this;}
    inline RejectDataShareResult& WithProducerArn(Aws::String&& value) { SetProducerArn(std::move(value)); return *this;}
    inline RejectDataShareResult& WithProducerArn(const char* value) { SetProducerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline bool GetAllowPubliclyAccessibleConsumers() const{ return m_allowPubliclyAccessibleConsumers; }
    inline void SetAllowPubliclyAccessibleConsumers(bool value) { m_allowPubliclyAccessibleConsumers = value; }
    inline RejectDataShareResult& WithAllowPubliclyAccessibleConsumers(bool value) { SetAllowPubliclyAccessibleConsumers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline const Aws::Vector<DataShareAssociation>& GetDataShareAssociations() const{ return m_dataShareAssociations; }
    inline void SetDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { m_dataShareAssociations = value; }
    inline void SetDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { m_dataShareAssociations = std::move(value); }
    inline RejectDataShareResult& WithDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { SetDataShareAssociations(value); return *this;}
    inline RejectDataShareResult& WithDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { SetDataShareAssociations(std::move(value)); return *this;}
    inline RejectDataShareResult& AddDataShareAssociations(const DataShareAssociation& value) { m_dataShareAssociations.push_back(value); return *this; }
    inline RejectDataShareResult& AddDataShareAssociations(DataShareAssociation&& value) { m_dataShareAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }
    inline void SetManagedBy(const Aws::String& value) { m_managedBy = value; }
    inline void SetManagedBy(Aws::String&& value) { m_managedBy = std::move(value); }
    inline void SetManagedBy(const char* value) { m_managedBy.assign(value); }
    inline RejectDataShareResult& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}
    inline RejectDataShareResult& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}
    inline RejectDataShareResult& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the datashare created by RegisterNamespace.</p>
     */
    inline const DataShareType& GetDataShareType() const{ return m_dataShareType; }
    inline void SetDataShareType(const DataShareType& value) { m_dataShareType = value; }
    inline void SetDataShareType(DataShareType&& value) { m_dataShareType = std::move(value); }
    inline RejectDataShareResult& WithDataShareType(const DataShareType& value) { SetDataShareType(value); return *this;}
    inline RejectDataShareResult& WithDataShareType(DataShareType&& value) { SetDataShareType(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline RejectDataShareResult& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline RejectDataShareResult& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataShareArn;

    Aws::String m_producerArn;

    bool m_allowPubliclyAccessibleConsumers;

    Aws::Vector<DataShareAssociation> m_dataShareAssociations;

    Aws::String m_managedBy;

    DataShareType m_dataShareType;

    ResponseMetadata m_responseMetadata;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
