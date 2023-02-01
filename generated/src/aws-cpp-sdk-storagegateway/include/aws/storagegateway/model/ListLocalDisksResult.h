/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/storagegateway/StorageGateway_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/storagegateway/model/Disk.h>
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
  class ListLocalDisksResult
  {
  public:
    AWS_STORAGEGATEWAY_API ListLocalDisksResult();
    AWS_STORAGEGATEWAY_API ListLocalDisksResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_STORAGEGATEWAY_API ListLocalDisksResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    
    inline const Aws::String& GetGatewayARN() const{ return m_gatewayARN; }

    
    inline void SetGatewayARN(const Aws::String& value) { m_gatewayARN = value; }

    
    inline void SetGatewayARN(Aws::String&& value) { m_gatewayARN = std::move(value); }

    
    inline void SetGatewayARN(const char* value) { m_gatewayARN.assign(value); }

    
    inline ListLocalDisksResult& WithGatewayARN(const Aws::String& value) { SetGatewayARN(value); return *this;}

    
    inline ListLocalDisksResult& WithGatewayARN(Aws::String&& value) { SetGatewayARN(std::move(value)); return *this;}

    
    inline ListLocalDisksResult& WithGatewayARN(const char* value) { SetGatewayARN(value); return *this;}


    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline const Aws::Vector<Disk>& GetDisks() const{ return m_disks; }

    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline void SetDisks(const Aws::Vector<Disk>& value) { m_disks = value; }

    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline void SetDisks(Aws::Vector<Disk>&& value) { m_disks = std::move(value); }

    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline ListLocalDisksResult& WithDisks(const Aws::Vector<Disk>& value) { SetDisks(value); return *this;}

    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline ListLocalDisksResult& WithDisks(Aws::Vector<Disk>&& value) { SetDisks(std::move(value)); return *this;}

    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline ListLocalDisksResult& AddDisks(const Disk& value) { m_disks.push_back(value); return *this; }

    /**
     * <p>A JSON object containing the following fields:</p> <ul> <li> <p>
     * <a>ListLocalDisksOutput$Disks</a> </p> </li> </ul>
     */
    inline ListLocalDisksResult& AddDisks(Disk&& value) { m_disks.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_gatewayARN;

    Aws::Vector<Disk> m_disks;
  };

} // namespace Model
} // namespace StorageGateway
} // namespace Aws
