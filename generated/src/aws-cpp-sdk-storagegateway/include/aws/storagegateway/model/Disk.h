/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
namespace StorageGateway
{
namespace Model
{

  /**
   * <p>Represents a gateway's local disk.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/storagegateway-2013-06-30/Disk">AWS
   * API Reference</a></p>
   */
  class Disk
  {
  public:
    AWS_STORAGEGATEWAY_API Disk() = default;
    AWS_STORAGEGATEWAY_API Disk(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Disk& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_STORAGEGATEWAY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique device ID or other distinguishing data that identifies a local
     * disk.</p>
     */
    inline const Aws::String& GetDiskId() const { return m_diskId; }
    inline bool DiskIdHasBeenSet() const { return m_diskIdHasBeenSet; }
    template<typename DiskIdT = Aws::String>
    void SetDiskId(DiskIdT&& value) { m_diskIdHasBeenSet = true; m_diskId = std::forward<DiskIdT>(value); }
    template<typename DiskIdT = Aws::String>
    Disk& WithDiskId(DiskIdT&& value) { SetDiskId(std::forward<DiskIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The path of a local disk in the gateway virtual machine (VM).</p>
     */
    inline const Aws::String& GetDiskPath() const { return m_diskPath; }
    inline bool DiskPathHasBeenSet() const { return m_diskPathHasBeenSet; }
    template<typename DiskPathT = Aws::String>
    void SetDiskPath(DiskPathT&& value) { m_diskPathHasBeenSet = true; m_diskPath = std::forward<DiskPathT>(value); }
    template<typename DiskPathT = Aws::String>
    Disk& WithDiskPath(DiskPathT&& value) { SetDiskPath(std::forward<DiskPathT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The device node of a local disk as assigned by the virtualization
     * environment.</p>
     */
    inline const Aws::String& GetDiskNode() const { return m_diskNode; }
    inline bool DiskNodeHasBeenSet() const { return m_diskNodeHasBeenSet; }
    template<typename DiskNodeT = Aws::String>
    void SetDiskNode(DiskNodeT&& value) { m_diskNodeHasBeenSet = true; m_diskNode = std::forward<DiskNodeT>(value); }
    template<typename DiskNodeT = Aws::String>
    Disk& WithDiskNode(DiskNodeT&& value) { SetDiskNode(std::forward<DiskNodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A value that represents the status of a local disk.</p>
     */
    inline const Aws::String& GetDiskStatus() const { return m_diskStatus; }
    inline bool DiskStatusHasBeenSet() const { return m_diskStatusHasBeenSet; }
    template<typename DiskStatusT = Aws::String>
    void SetDiskStatus(DiskStatusT&& value) { m_diskStatusHasBeenSet = true; m_diskStatus = std::forward<DiskStatusT>(value); }
    template<typename DiskStatusT = Aws::String>
    Disk& WithDiskStatus(DiskStatusT&& value) { SetDiskStatus(std::forward<DiskStatusT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The local disk size in bytes.</p>
     */
    inline long long GetDiskSizeInBytes() const { return m_diskSizeInBytes; }
    inline bool DiskSizeInBytesHasBeenSet() const { return m_diskSizeInBytesHasBeenSet; }
    inline void SetDiskSizeInBytes(long long value) { m_diskSizeInBytesHasBeenSet = true; m_diskSizeInBytes = value; }
    inline Disk& WithDiskSizeInBytes(long long value) { SetDiskSizeInBytes(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDiskAllocationType() const { return m_diskAllocationType; }
    inline bool DiskAllocationTypeHasBeenSet() const { return m_diskAllocationTypeHasBeenSet; }
    template<typename DiskAllocationTypeT = Aws::String>
    void SetDiskAllocationType(DiskAllocationTypeT&& value) { m_diskAllocationTypeHasBeenSet = true; m_diskAllocationType = std::forward<DiskAllocationTypeT>(value); }
    template<typename DiskAllocationTypeT = Aws::String>
    Disk& WithDiskAllocationType(DiskAllocationTypeT&& value) { SetDiskAllocationType(std::forward<DiskAllocationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The iSCSI qualified name (IQN) that is defined for a disk. This field is not
     * included in the response if the local disk is not defined as an iSCSI target.
     * The format of this field is <i>targetIqn::LUNNumber::region-volumeId</i>.</p>
     */
    inline const Aws::String& GetDiskAllocationResource() const { return m_diskAllocationResource; }
    inline bool DiskAllocationResourceHasBeenSet() const { return m_diskAllocationResourceHasBeenSet; }
    template<typename DiskAllocationResourceT = Aws::String>
    void SetDiskAllocationResource(DiskAllocationResourceT&& value) { m_diskAllocationResourceHasBeenSet = true; m_diskAllocationResource = std::forward<DiskAllocationResourceT>(value); }
    template<typename DiskAllocationResourceT = Aws::String>
    Disk& WithDiskAllocationResource(DiskAllocationResourceT&& value) { SetDiskAllocationResource(std::forward<DiskAllocationResourceT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetDiskAttributeList() const { return m_diskAttributeList; }
    inline bool DiskAttributeListHasBeenSet() const { return m_diskAttributeListHasBeenSet; }
    template<typename DiskAttributeListT = Aws::Vector<Aws::String>>
    void SetDiskAttributeList(DiskAttributeListT&& value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList = std::forward<DiskAttributeListT>(value); }
    template<typename DiskAttributeListT = Aws::Vector<Aws::String>>
    Disk& WithDiskAttributeList(DiskAttributeListT&& value) { SetDiskAttributeList(std::forward<DiskAttributeListT>(value)); return *this;}
    template<typename DiskAttributeListT = Aws::String>
    Disk& AddDiskAttributeList(DiskAttributeListT&& value) { m_diskAttributeListHasBeenSet = true; m_diskAttributeList.emplace_back(std::forward<DiskAttributeListT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_diskId;
    bool m_diskIdHasBeenSet = false;

    Aws::String m_diskPath;
    bool m_diskPathHasBeenSet = false;

    Aws::String m_diskNode;
    bool m_diskNodeHasBeenSet = false;

    Aws::String m_diskStatus;
    bool m_diskStatusHasBeenSet = false;

    long long m_diskSizeInBytes{0};
    bool m_diskSizeInBytesHasBeenSet = false;

    Aws::String m_diskAllocationType;
    bool m_diskAllocationTypeHasBeenSet = false;

    Aws::String m_diskAllocationResource;
    bool m_diskAllocationResourceHasBeenSet = false;

    Aws::Vector<Aws::String> m_diskAttributeList;
    bool m_diskAttributeListHasBeenSet = false;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
