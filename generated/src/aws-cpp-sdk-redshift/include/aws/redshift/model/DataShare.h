﻿/**
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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the datashare that the consumer is to
     * use.</p>
     */
    inline const Aws::String& GetDataShareArn() const{ return m_dataShareArn; }
    inline bool DataShareArnHasBeenSet() const { return m_dataShareArnHasBeenSet; }
    inline void SetDataShareArn(const Aws::String& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = value; }
    inline void SetDataShareArn(Aws::String&& value) { m_dataShareArnHasBeenSet = true; m_dataShareArn = std::move(value); }
    inline void SetDataShareArn(const char* value) { m_dataShareArnHasBeenSet = true; m_dataShareArn.assign(value); }
    inline DataShare& WithDataShareArn(const Aws::String& value) { SetDataShareArn(value); return *this;}
    inline DataShare& WithDataShareArn(Aws::String&& value) { SetDataShareArn(std::move(value)); return *this;}
    inline DataShare& WithDataShareArn(const char* value) { SetDataShareArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the producer namespace.</p>
     */
    inline const Aws::String& GetProducerArn() const{ return m_producerArn; }
    inline bool ProducerArnHasBeenSet() const { return m_producerArnHasBeenSet; }
    inline void SetProducerArn(const Aws::String& value) { m_producerArnHasBeenSet = true; m_producerArn = value; }
    inline void SetProducerArn(Aws::String&& value) { m_producerArnHasBeenSet = true; m_producerArn = std::move(value); }
    inline void SetProducerArn(const char* value) { m_producerArnHasBeenSet = true; m_producerArn.assign(value); }
    inline DataShare& WithProducerArn(const Aws::String& value) { SetProducerArn(value); return *this;}
    inline DataShare& WithProducerArn(Aws::String&& value) { SetProducerArn(std::move(value)); return *this;}
    inline DataShare& WithProducerArn(const char* value) { SetProducerArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies whether the datashare can be shared to a publicly
     * accessible cluster.</p>
     */
    inline bool GetAllowPubliclyAccessibleConsumers() const{ return m_allowPubliclyAccessibleConsumers; }
    inline bool AllowPubliclyAccessibleConsumersHasBeenSet() const { return m_allowPubliclyAccessibleConsumersHasBeenSet; }
    inline void SetAllowPubliclyAccessibleConsumers(bool value) { m_allowPubliclyAccessibleConsumersHasBeenSet = true; m_allowPubliclyAccessibleConsumers = value; }
    inline DataShare& WithAllowPubliclyAccessibleConsumers(bool value) { SetAllowPubliclyAccessibleConsumers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that specifies when the datashare has an association between producer
     * and data consumers.</p>
     */
    inline const Aws::Vector<DataShareAssociation>& GetDataShareAssociations() const{ return m_dataShareAssociations; }
    inline bool DataShareAssociationsHasBeenSet() const { return m_dataShareAssociationsHasBeenSet; }
    inline void SetDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations = value; }
    inline void SetDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations = std::move(value); }
    inline DataShare& WithDataShareAssociations(const Aws::Vector<DataShareAssociation>& value) { SetDataShareAssociations(value); return *this;}
    inline DataShare& WithDataShareAssociations(Aws::Vector<DataShareAssociation>&& value) { SetDataShareAssociations(std::move(value)); return *this;}
    inline DataShare& AddDataShareAssociations(const DataShareAssociation& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations.push_back(value); return *this; }
    inline DataShare& AddDataShareAssociations(DataShareAssociation&& value) { m_dataShareAssociationsHasBeenSet = true; m_dataShareAssociations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The identifier of a datashare to show its managing entity.</p>
     */
    inline const Aws::String& GetManagedBy() const{ return m_managedBy; }
    inline bool ManagedByHasBeenSet() const { return m_managedByHasBeenSet; }
    inline void SetManagedBy(const Aws::String& value) { m_managedByHasBeenSet = true; m_managedBy = value; }
    inline void SetManagedBy(Aws::String&& value) { m_managedByHasBeenSet = true; m_managedBy = std::move(value); }
    inline void SetManagedBy(const char* value) { m_managedByHasBeenSet = true; m_managedBy.assign(value); }
    inline DataShare& WithManagedBy(const Aws::String& value) { SetManagedBy(value); return *this;}
    inline DataShare& WithManagedBy(Aws::String&& value) { SetManagedBy(std::move(value)); return *this;}
    inline DataShare& WithManagedBy(const char* value) { SetManagedBy(value); return *this;}
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const{ return m_responseMetadata; }
    inline void SetResponseMetadata(const ResponseMetadata& value) { m_responseMetadata = value; }
    inline void SetResponseMetadata(ResponseMetadata&& value) { m_responseMetadata = std::move(value); }
    inline DataShare& WithResponseMetadata(const ResponseMetadata& value) { SetResponseMetadata(value); return *this;}
    inline DataShare& WithResponseMetadata(ResponseMetadata&& value) { SetResponseMetadata(std::move(value)); return *this;}
    ///@}
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
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
