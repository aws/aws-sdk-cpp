/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace StorageGateway
{
namespace Model
{
  class DeleteSnapshotScheduleResult
  {
  public:
    AWS_STORAGEGATEWAY_API DeleteSnapshotScheduleResult();
    AWS_STORAGEGATEWAY_API DeleteSnapshotScheduleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API DeleteSnapshotScheduleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline const Aws::String& GetVolumeARN() const{ return m_volumeARN; }

    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline void SetVolumeARN(const Aws::String& value) { m_volumeARN = value; }

    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline void SetVolumeARN(Aws::String&& value) { m_volumeARN = std::move(value); }

    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline void SetVolumeARN(const char* value) { m_volumeARN.assign(value); }

    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline DeleteSnapshotScheduleResult& WithVolumeARN(const Aws::String& value) { SetVolumeARN(value); return *this;}

    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline DeleteSnapshotScheduleResult& WithVolumeARN(Aws::String&& value) { SetVolumeARN(std::move(value)); return *this;}

    /**
     * <p>The volume which snapshot schedule was deleted.</p>
     */
    inline DeleteSnapshotScheduleResult& WithVolumeARN(const char* value) { SetVolumeARN(value); return *this;}

  private:

    Aws::String m_volumeARN;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
