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
  class DisassociateDataShareConsumerResult
  {
  public:
    AWS_REDSHIFT_API DisassociateDataShareConsumerResult() = default;
    AWS_REDSHIFT_API DisassociateDataShareConsumerResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_REDSHIFT_API DisassociateDataShareConsumerResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to
     * use.</p>
     */
    inline const Aws::String& GetDataShareArn() const { return m_dataShareArn; }
    template<typename DataShareArnT = Aws::String>
    void SetDataShareArn(DataShareArnT&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::forward<DataShareArnT>(value); }
    template<typename DataShareArnT = Aws::String>
    DisassociateDataShareConsumerResult& WithDataShareArn(DataShareArnT&& value) { SetDataShareArn(std::forward<DataShareArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the producer namespace.</p>
     */
    inline const Aws::String& GetProducerArn() const { return m_producerArn; }
    template<typename ProducerArnT = Aws::String>
    void SetProducerArn(ProducerArnT&& value) { m_producerArnHasBeenSet = true; m_producerArn = std::forward<ProducerArnT>(value); }
    template<typename ProducerArnT = Aws::String>
    DisassociateDataShareConsumerResult& WithProducerArn(ProducerArnT&& value) { SetProducerArn(std::forward<ProducerArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline bool GetAllowPubliclyAccessibleConsumers() const { return m_allowPubliclyAccessibleConsumers; }
    inline void SetAllowPubliclyAccessibleConsumers(bool value) { m_allowPubliclyAccessibleConsumersHasBeenSet = true; m_allowPubliclyAccessibleConsumers = value; }
    inline DisassociateDataShareConsumerResult& WithAllowPubliclyAccessibleConsumers(bool value) { SetAllowPubliclyAccessibleConsumers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline const Aws::Vector<DataShareAssociation>& GetDataShareAssociations() const { return m_dataShareAssociations; }
    template<typename DataShareAssociationsT = Aws::Vector<DataShareAssociation>>
    void SetDataShareAssociations(DataShareAssociationsT&& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations = std::forward<DataShareAssociationsT>(value); }
    template<typename DataShareAssociationsT = Aws::Vector<DataShareAssociation>>
    DisassociateDataShareConsumerResult& WithDataShareAssociations(DataShareAssociationsT&& value) { SetDataShareAssociations(std::forward<DataShareAssociationsT>(value)); return *this;}
    template<typename DataShareAssociationsT = DataShareAssociation>
    DisassociateDataShareConsumerResult& AddDataShareAssociations(DataShareAssociationsT&& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations.emplace_back(std::forward<DataShareAssociationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline const Aws::String& GetManagedBy() const { return m_managedBy; }
    template<typename ManagedByT = Aws::String>
    void SetManagedBy(ManagedByT&& value) { m_managedByHasBeenSet = true; m_managedBy = std::forward<ManagedByT>(value); }
    template<typename ManagedByT = Aws::String>
    DisassociateDataShareConsumerResult& WithManagedBy(ManagedByT&& value) { SetManagedBy(std::forward<ManagedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The type of the datashare created by RegisterNamespace.</p>
     */
    inline DataShareType GetDataShareType() const { return m_dataShareType; }
    inline void SetDataShareType(DataShareType value) { m_dataShareTypeHasBeenSet = true; m_dataShareType = value; }
    inline DisassociateDataShareConsumerResult& WithDataShareType(DataShareType value) { SetDataShareType(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    DisassociateDataShareConsumerResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_dataShareArn;
    bool m_dataShareArnHasBeenSet = false;

    Aws::String m_producerArn;
    bool m_producerArnHasBeenSet = false;

    bool m_allowPubliclyAccessibleConsumers{false};
    bool m_allowPubliclyAccessibleConsumersHasBeenSet = false;

    Aws::Vector<DataShareAssociation> m_dataShareAssociations;
    bool m_dataShareAssociationsHasBeenSet = false;

    Aws::String m_managedBy;
    bool m_managedByHasBeenSet = false;

    DataShareType m_dataShareType{DataShareType::NOT_SET};
    bool m_dataShareTypeHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
