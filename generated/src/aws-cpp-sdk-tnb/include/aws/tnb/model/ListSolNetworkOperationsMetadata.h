/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace tnb
{
namespace Model
{

  /**
   * <p>Metadata related to a network operation.</p> <p>A network operation is any
   * operation that is done to your network, such as network instance instantiation
   * or termination.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/tnb-2008-10-21/ListSolNetworkOperationsMetadata">AWS
   * API Reference</a></p>
   */
  class ListSolNetworkOperationsMetadata
  {
  public:
    AWS_TNB_API ListSolNetworkOperationsMetadata();
    AWS_TNB_API ListSolNetworkOperationsMetadata(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API ListSolNetworkOperationsMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_TNB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date that the resource was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreatedAt() const{ return m_createdAt; }
    inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
    inline void SetCreatedAt(const Aws::Utils::DateTime& value) { m_createdAtHasBeenSet = true; m_createdAt = value; }
    inline void SetCreatedAt(Aws::Utils::DateTime&& value) { m_createdAtHasBeenSet = true; m_createdAt = std::move(value); }
    inline ListSolNetworkOperationsMetadata& WithCreatedAt(const Aws::Utils::DateTime& value) { SetCreatedAt(value); return *this;}
    inline ListSolNetworkOperationsMetadata& WithCreatedAt(Aws::Utils::DateTime&& value) { SetCreatedAt(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date that the resource was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModified() const{ return m_lastModified; }
    inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
    inline void SetLastModified(const Aws::Utils::DateTime& value) { m_lastModifiedHasBeenSet = true; m_lastModified = value; }
    inline void SetLastModified(Aws::Utils::DateTime&& value) { m_lastModifiedHasBeenSet = true; m_lastModified = std::move(value); }
    inline ListSolNetworkOperationsMetadata& WithLastModified(const Aws::Utils::DateTime& value) { SetLastModified(value); return *this;}
    inline ListSolNetworkOperationsMetadata& WithLastModified(Aws::Utils::DateTime&& value) { SetLastModified(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network service descriptor id used for the operation.</p> <p>Only present
     * if the updateType is <code>UPDATE_NS</code>.</p>
     */
    inline const Aws::String& GetNsdInfoId() const{ return m_nsdInfoId; }
    inline bool NsdInfoIdHasBeenSet() const { return m_nsdInfoIdHasBeenSet; }
    inline void SetNsdInfoId(const Aws::String& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = value; }
    inline void SetNsdInfoId(Aws::String&& value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId = std::move(value); }
    inline void SetNsdInfoId(const char* value) { m_nsdInfoIdHasBeenSet = true; m_nsdInfoId.assign(value); }
    inline ListSolNetworkOperationsMetadata& WithNsdInfoId(const Aws::String& value) { SetNsdInfoId(value); return *this;}
    inline ListSolNetworkOperationsMetadata& WithNsdInfoId(Aws::String&& value) { SetNsdInfoId(std::move(value)); return *this;}
    inline ListSolNetworkOperationsMetadata& WithNsdInfoId(const char* value) { SetNsdInfoId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The network function id used for the operation.</p> <p>Only present if the
     * updateType is <code>MODIFY_VNF_INFO</code>.</p>
     */
    inline const Aws::String& GetVnfInstanceId() const{ return m_vnfInstanceId; }
    inline bool VnfInstanceIdHasBeenSet() const { return m_vnfInstanceIdHasBeenSet; }
    inline void SetVnfInstanceId(const Aws::String& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = value; }
    inline void SetVnfInstanceId(Aws::String&& value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId = std::move(value); }
    inline void SetVnfInstanceId(const char* value) { m_vnfInstanceIdHasBeenSet = true; m_vnfInstanceId.assign(value); }
    inline ListSolNetworkOperationsMetadata& WithVnfInstanceId(const Aws::String& value) { SetVnfInstanceId(value); return *this;}
    inline ListSolNetworkOperationsMetadata& WithVnfInstanceId(Aws::String&& value) { SetVnfInstanceId(std::move(value)); return *this;}
    inline ListSolNetworkOperationsMetadata& WithVnfInstanceId(const char* value) { SetVnfInstanceId(value); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_createdAt;
    bool m_createdAtHasBeenSet = false;

    Aws::Utils::DateTime m_lastModified;
    bool m_lastModifiedHasBeenSet = false;

    Aws::String m_nsdInfoId;
    bool m_nsdInfoIdHasBeenSet = false;

    Aws::String m_vnfInstanceId;
    bool m_vnfInstanceIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
