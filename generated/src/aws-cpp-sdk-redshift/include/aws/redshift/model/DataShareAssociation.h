/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/redshift/model/DataShareStatus.h>
#include <aws/core/utils/DateTime.h>
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

  /**
   * <p>The association of a datashare from a producer account with a data consumer.
   * </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/DataShareAssociation">AWS
   * API Reference</a></p>
   */
  class DataShareAssociation
  {
  public:
    AWS_REDSHIFT_API DataShareAssociation() = default;
    AWS_REDSHIFT_API DataShareAssociation(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API DataShareAssociation& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The name of the consumer accounts that have an association with a producer
     * datashare.</p>
     */
    inline const Aws::String& GetConsumerIdentifier() const { return m_consumerIdentifier; }
    inline bool ConsumerIdentifierHasBeenSet() const { return m_consumerIdentifierHasBeenSet; }
    template<typename ConsumerIdentifierT = Aws::String>
    void SetConsumerIdentifier(ConsumerIdentifierT&& value) { m_consumerIdentifierHasBeenSet = true; m_consumerIdentifier = std::forward<ConsumerIdentifierT>(value); }
    template<typename ConsumerIdentifierT = Aws::String>
    DataShareAssociation& WithConsumerIdentifier(ConsumerIdentifierT&& value) { SetConsumerIdentifier(std::forward<ConsumerIdentifierT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the datashare that is associated.</p>
     */
    inline DataShareStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(DataShareStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DataShareAssociation& WithStatus(DataShareStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services Region of the consumer accounts that have an
     * association with a producer datashare.</p>
     */
    inline const Aws::String& GetConsumerRegion() const { return m_consumerRegion; }
    inline bool ConsumerRegionHasBeenSet() const { return m_consumerRegionHasBeenSet; }
    template<typename ConsumerRegionT = Aws::String>
    void SetConsumerRegion(ConsumerRegionT&& value) { m_consumerRegionHasBeenSet = true; m_consumerRegion = std::forward<ConsumerRegionT>(value); }
    template<typename ConsumerRegionT = Aws::String>
    DataShareAssociation& WithConsumerRegion(ConsumerRegionT&& value) { SetConsumerRegion(std::forward<ConsumerRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation date of the datashare that is associated.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedDate() const { return m_createdDate; }
    inline bool CreatedDateHasBeenSet() const { return m_createdDateHasBeenSet; }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    void SetCreatedDate(CreatedDateT&& value) { m_createdDateHasBeenSet = true; m_createdDate = std::forward<CreatedDateT>(value); }
    template<typename CreatedDateT = Aws::Utils::DateTime>
    DataShareAssociation& WithCreatedDate(CreatedDateT&& value) { SetCreatedDate(std::forward<CreatedDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status change data of the datashare that is associated.</p>
     */
    inline const Aws::Utils::DateTime& GetStatusChangeDate() const { return m_statusChangeDate; }
    inline bool StatusChangeDateHasBeenSet() const { return m_statusChangeDateHasBeenSet; }
    template<typename StatusChangeDateT = Aws::Utils::DateTime>
    void SetStatusChangeDate(StatusChangeDateT&& value) { m_statusChangeDateHasBeenSet = true; m_statusChangeDate = std::forward<StatusChangeDateT>(value); }
    template<typename StatusChangeDateT = Aws::Utils::DateTime>
    DataShareAssociation& WithStatusChangeDate(StatusChangeDateT&& value) { SetStatusChangeDate(std::forward<StatusChangeDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether write operations were allowed during data share
     * authorization.</p>
     */
    inline bool GetProducerAllowedWrites() const { return m_producerAllowedWrites; }
    inline bool ProducerAllowedWritesHasBeenSet() const { return m_producerAllowedWritesHasBeenSet; }
    inline void SetProducerAllowedWrites(bool value) { m_producerAllowedWritesHasBeenSet = true; m_producerAllowedWrites = value; }
    inline DataShareAssociation& WithProducerAllowedWrites(bool value) { SetProducerAllowedWrites(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether write operations were allowed during data share
     * association.</p>
     */
    inline bool GetConsumerAcceptedWrites() const { return m_consumerAcceptedWrites; }
    inline bool ConsumerAcceptedWritesHasBeenSet() const { return m_consumerAcceptedWritesHasBeenSet; }
    inline void SetConsumerAcceptedWrites(bool value) { m_consumerAcceptedWritesHasBeenSet = true; m_consumerAcceptedWrites = value; }
    inline DataShareAssociation& WithConsumerAcceptedWrites(bool value) { SetConsumerAcceptedWrites(value); return *this;}
    ///@}
  private:

    Aws::String m_consumerIdentifier;
    bool m_consumerIdentifierHasBeenSet = false;

    DataShareStatus m_status{DataShareStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_consumerRegion;
    bool m_consumerRegionHasBeenSet = false;

    Aws::Utils::DateTime m_createdDate{};
    bool m_createdDateHasBeenSet = false;

    Aws::Utils::DateTime m_statusChangeDate{};
    bool m_statusChangeDateHasBeenSet = false;

    bool m_producerAllowedWrites{false};
    bool m_producerAllowedWritesHasBeenSet = false;

    bool m_consumerAcceptedWrites{false};
    bool m_consumerAcceptedWritesHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
