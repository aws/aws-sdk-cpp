/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/OdbRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/odb/model/Access.h>
#include <utility>

namespace Aws
{
namespace odb
{
namespace Model
{

  /**
   */
  class UpdateOdbNetworkRequest : public OdbRequest
  {
  public:
    AWS_ODB_API UpdateOdbNetworkRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateOdbNetwork"; }

    AWS_ODB_API Aws::String SerializePayload() const override;

    AWS_ODB_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The unique identifier of the ODB network to update.</p>
     */
    inline const Aws::String& GetOdbNetworkId() const { return m_odbNetworkId; }
    inline bool OdbNetworkIdHasBeenSet() const { return m_odbNetworkIdHasBeenSet; }
    template<typename OdbNetworkIdT = Aws::String>
    void SetOdbNetworkId(OdbNetworkIdT&& value) { m_odbNetworkIdHasBeenSet = true; m_odbNetworkId = std::forward<OdbNetworkIdT>(value); }
    template<typename OdbNetworkIdT = Aws::String>
    UpdateOdbNetworkRequest& WithOdbNetworkId(OdbNetworkIdT&& value) { SetOdbNetworkId(std::forward<OdbNetworkIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new user-friendly name of the ODB network.</p>
     */
    inline const Aws::String& GetDisplayName() const { return m_displayName; }
    inline bool DisplayNameHasBeenSet() const { return m_displayNameHasBeenSet; }
    template<typename DisplayNameT = Aws::String>
    void SetDisplayName(DisplayNameT&& value) { m_displayNameHasBeenSet = true; m_displayName = std::forward<DisplayNameT>(value); }
    template<typename DisplayNameT = Aws::String>
    UpdateOdbNetworkRequest& WithDisplayName(DisplayNameT&& value) { SetDisplayName(std::forward<DisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of CIDR ranges from the peered VPC that allow access to the ODB
     * network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPeeredCidrsToBeAdded() const { return m_peeredCidrsToBeAdded; }
    inline bool PeeredCidrsToBeAddedHasBeenSet() const { return m_peeredCidrsToBeAddedHasBeenSet; }
    template<typename PeeredCidrsToBeAddedT = Aws::Vector<Aws::String>>
    void SetPeeredCidrsToBeAdded(PeeredCidrsToBeAddedT&& value) { m_peeredCidrsToBeAddedHasBeenSet = true; m_peeredCidrsToBeAdded = std::forward<PeeredCidrsToBeAddedT>(value); }
    template<typename PeeredCidrsToBeAddedT = Aws::Vector<Aws::String>>
    UpdateOdbNetworkRequest& WithPeeredCidrsToBeAdded(PeeredCidrsToBeAddedT&& value) { SetPeeredCidrsToBeAdded(std::forward<PeeredCidrsToBeAddedT>(value)); return *this;}
    template<typename PeeredCidrsToBeAddedT = Aws::String>
    UpdateOdbNetworkRequest& AddPeeredCidrsToBeAdded(PeeredCidrsToBeAddedT&& value) { m_peeredCidrsToBeAddedHasBeenSet = true; m_peeredCidrsToBeAdded.emplace_back(std::forward<PeeredCidrsToBeAddedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The list of CIDR ranges from the peered VPC to remove from the ODB
     * network.</p>
     */
    inline const Aws::Vector<Aws::String>& GetPeeredCidrsToBeRemoved() const { return m_peeredCidrsToBeRemoved; }
    inline bool PeeredCidrsToBeRemovedHasBeenSet() const { return m_peeredCidrsToBeRemovedHasBeenSet; }
    template<typename PeeredCidrsToBeRemovedT = Aws::Vector<Aws::String>>
    void SetPeeredCidrsToBeRemoved(PeeredCidrsToBeRemovedT&& value) { m_peeredCidrsToBeRemovedHasBeenSet = true; m_peeredCidrsToBeRemoved = std::forward<PeeredCidrsToBeRemovedT>(value); }
    template<typename PeeredCidrsToBeRemovedT = Aws::Vector<Aws::String>>
    UpdateOdbNetworkRequest& WithPeeredCidrsToBeRemoved(PeeredCidrsToBeRemovedT&& value) { SetPeeredCidrsToBeRemoved(std::forward<PeeredCidrsToBeRemovedT>(value)); return *this;}
    template<typename PeeredCidrsToBeRemovedT = Aws::String>
    UpdateOdbNetworkRequest& AddPeeredCidrsToBeRemoved(PeeredCidrsToBeRemovedT&& value) { m_peeredCidrsToBeRemovedHasBeenSet = true; m_peeredCidrsToBeRemoved.emplace_back(std::forward<PeeredCidrsToBeRemovedT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Specifies the updated configuration for Amazon S3 access from the ODB
     * network.</p>
     */
    inline Access GetS3Access() const { return m_s3Access; }
    inline bool S3AccessHasBeenSet() const { return m_s3AccessHasBeenSet; }
    inline void SetS3Access(Access value) { m_s3AccessHasBeenSet = true; m_s3Access = value; }
    inline UpdateOdbNetworkRequest& WithS3Access(Access value) { SetS3Access(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the updated configuration for Zero-ETL access from the ODB
     * network.</p>
     */
    inline Access GetZeroEtlAccess() const { return m_zeroEtlAccess; }
    inline bool ZeroEtlAccessHasBeenSet() const { return m_zeroEtlAccessHasBeenSet; }
    inline void SetZeroEtlAccess(Access value) { m_zeroEtlAccessHasBeenSet = true; m_zeroEtlAccess = value; }
    inline UpdateOdbNetworkRequest& WithZeroEtlAccess(Access value) { SetZeroEtlAccess(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies the updated endpoint policy for Amazon S3 access from the ODB
     * network.</p>
     */
    inline const Aws::String& GetS3PolicyDocument() const { return m_s3PolicyDocument; }
    inline bool S3PolicyDocumentHasBeenSet() const { return m_s3PolicyDocumentHasBeenSet; }
    template<typename S3PolicyDocumentT = Aws::String>
    void SetS3PolicyDocument(S3PolicyDocumentT&& value) { m_s3PolicyDocumentHasBeenSet = true; m_s3PolicyDocument = std::forward<S3PolicyDocumentT>(value); }
    template<typename S3PolicyDocumentT = Aws::String>
    UpdateOdbNetworkRequest& WithS3PolicyDocument(S3PolicyDocumentT&& value) { SetS3PolicyDocument(std::forward<S3PolicyDocumentT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_odbNetworkId;
    bool m_odbNetworkIdHasBeenSet = false;

    Aws::String m_displayName;
    bool m_displayNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_peeredCidrsToBeAdded;
    bool m_peeredCidrsToBeAddedHasBeenSet = false;

    Aws::Vector<Aws::String> m_peeredCidrsToBeRemoved;
    bool m_peeredCidrsToBeRemovedHasBeenSet = false;

    Access m_s3Access{Access::NOT_SET};
    bool m_s3AccessHasBeenSet = false;

    Access m_zeroEtlAccess{Access::NOT_SET};
    bool m_zeroEtlAccessHasBeenSet = false;

    Aws::String m_s3PolicyDocument;
    bool m_s3PolicyDocumentHasBeenSet = false;
  };

} // namespace Model
} // namespace odb
} // namespace Aws
