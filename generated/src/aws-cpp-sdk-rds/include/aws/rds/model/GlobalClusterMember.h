/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/WriteForwardingStatus.h>
#include <aws/rds/model/GlobalClusterMemberSynchronizationStatus.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>A data structure with information about any primary and secondary clusters
   * associated with a global cluster (Aurora global database).</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/GlobalClusterMember">AWS
   * API Reference</a></p>
   */
  class GlobalClusterMember
  {
  public:
    AWS_RDS_API GlobalClusterMember();
    AWS_RDS_API GlobalClusterMember(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API GlobalClusterMember& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline const Aws::String& GetDBClusterArn() const{ return m_dBClusterArn; }

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline bool DBClusterArnHasBeenSet() const { return m_dBClusterArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline void SetDBClusterArn(const Aws::String& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline void SetDBClusterArn(Aws::String&& value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline void SetDBClusterArn(const char* value) { m_dBClusterArnHasBeenSet = true; m_dBClusterArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithDBClusterArn(const Aws::String& value) { SetDBClusterArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithDBClusterArn(Aws::String&& value) { SetDBClusterArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithDBClusterArn(const char* value) { SetDBClusterArn(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaders() const{ return m_readers; }

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline bool ReadersHasBeenSet() const { return m_readersHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline void SetReaders(const Aws::Vector<Aws::String>& value) { m_readersHasBeenSet = true; m_readers = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline void SetReaders(Aws::Vector<Aws::String>&& value) { m_readersHasBeenSet = true; m_readers = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline GlobalClusterMember& WithReaders(const Aws::Vector<Aws::String>& value) { SetReaders(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline GlobalClusterMember& WithReaders(Aws::Vector<Aws::String>&& value) { SetReaders(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline GlobalClusterMember& AddReaders(const Aws::String& value) { m_readersHasBeenSet = true; m_readers.push_back(value); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline GlobalClusterMember& AddReaders(Aws::String&& value) { m_readersHasBeenSet = true; m_readers.push_back(std::move(value)); return *this; }

    /**
     * <p>The Amazon Resource Name (ARN) for each read-only secondary cluster
     * associated with the global cluster.</p>
     */
    inline GlobalClusterMember& AddReaders(const char* value) { m_readersHasBeenSet = true; m_readers.push_back(value); return *this; }


    /**
     * <p>Indicates whether the Aurora DB cluster is the primary cluster (that is, has
     * read-write capability) for the global cluster with which it is associated.</p>
     */
    inline bool GetIsWriter() const{ return m_isWriter; }

    /**
     * <p>Indicates whether the Aurora DB cluster is the primary cluster (that is, has
     * read-write capability) for the global cluster with which it is associated.</p>
     */
    inline bool IsWriterHasBeenSet() const { return m_isWriterHasBeenSet; }

    /**
     * <p>Indicates whether the Aurora DB cluster is the primary cluster (that is, has
     * read-write capability) for the global cluster with which it is associated.</p>
     */
    inline void SetIsWriter(bool value) { m_isWriterHasBeenSet = true; m_isWriter = value; }

    /**
     * <p>Indicates whether the Aurora DB cluster is the primary cluster (that is, has
     * read-write capability) for the global cluster with which it is associated.</p>
     */
    inline GlobalClusterMember& WithIsWriter(bool value) { SetIsWriter(value); return *this;}


    /**
     * <p>The status of write forwarding for a secondary cluster in the global
     * cluster.</p>
     */
    inline const WriteForwardingStatus& GetGlobalWriteForwardingStatus() const{ return m_globalWriteForwardingStatus; }

    /**
     * <p>The status of write forwarding for a secondary cluster in the global
     * cluster.</p>
     */
    inline bool GlobalWriteForwardingStatusHasBeenSet() const { return m_globalWriteForwardingStatusHasBeenSet; }

    /**
     * <p>The status of write forwarding for a secondary cluster in the global
     * cluster.</p>
     */
    inline void SetGlobalWriteForwardingStatus(const WriteForwardingStatus& value) { m_globalWriteForwardingStatusHasBeenSet = true; m_globalWriteForwardingStatus = value; }

    /**
     * <p>The status of write forwarding for a secondary cluster in the global
     * cluster.</p>
     */
    inline void SetGlobalWriteForwardingStatus(WriteForwardingStatus&& value) { m_globalWriteForwardingStatusHasBeenSet = true; m_globalWriteForwardingStatus = std::move(value); }

    /**
     * <p>The status of write forwarding for a secondary cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithGlobalWriteForwardingStatus(const WriteForwardingStatus& value) { SetGlobalWriteForwardingStatus(value); return *this;}

    /**
     * <p>The status of write forwarding for a secondary cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithGlobalWriteForwardingStatus(WriteForwardingStatus&& value) { SetGlobalWriteForwardingStatus(std::move(value)); return *this;}


    /**
     * <p>The status of synchronization of each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline const GlobalClusterMemberSynchronizationStatus& GetSynchronizationStatus() const{ return m_synchronizationStatus; }

    /**
     * <p>The status of synchronization of each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline bool SynchronizationStatusHasBeenSet() const { return m_synchronizationStatusHasBeenSet; }

    /**
     * <p>The status of synchronization of each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline void SetSynchronizationStatus(const GlobalClusterMemberSynchronizationStatus& value) { m_synchronizationStatusHasBeenSet = true; m_synchronizationStatus = value; }

    /**
     * <p>The status of synchronization of each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline void SetSynchronizationStatus(GlobalClusterMemberSynchronizationStatus&& value) { m_synchronizationStatusHasBeenSet = true; m_synchronizationStatus = std::move(value); }

    /**
     * <p>The status of synchronization of each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithSynchronizationStatus(const GlobalClusterMemberSynchronizationStatus& value) { SetSynchronizationStatus(value); return *this;}

    /**
     * <p>The status of synchronization of each Aurora DB cluster in the global
     * cluster.</p>
     */
    inline GlobalClusterMember& WithSynchronizationStatus(GlobalClusterMemberSynchronizationStatus&& value) { SetSynchronizationStatus(std::move(value)); return *this;}

  private:

    Aws::String m_dBClusterArn;
    bool m_dBClusterArnHasBeenSet = false;

    Aws::Vector<Aws::String> m_readers;
    bool m_readersHasBeenSet = false;

    bool m_isWriter;
    bool m_isWriterHasBeenSet = false;

    WriteForwardingStatus m_globalWriteForwardingStatus;
    bool m_globalWriteForwardingStatusHasBeenSet = false;

    GlobalClusterMemberSynchronizationStatus m_synchronizationStatus;
    bool m_synchronizationStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
