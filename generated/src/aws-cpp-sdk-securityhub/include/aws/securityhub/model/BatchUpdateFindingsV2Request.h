/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/SecurityHubRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityhub/model/OcsfFindingIdentifier.h>
#include <utility>

namespace Aws
{
namespace SecurityHub
{
namespace Model
{

  /**
   */
  class BatchUpdateFindingsV2Request : public SecurityHubRequest
  {
  public:
    AWS_SECURITYHUB_API BatchUpdateFindingsV2Request() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchUpdateFindingsV2"; }

    AWS_SECURITYHUB_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The list of finding <code>metadata.uid</code> to indicate findings to update.
     * Finding <code>metadata.uid</code> is a globally unique identifier associated
     * with the finding. Customers cannot use <code>MetadataUids</code> together with
     * <code>FindingIdentifiers</code>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetMetadataUids() const { return m_metadataUids; }
    inline bool MetadataUidsHasBeenSet() const { return m_metadataUidsHasBeenSet; }
    template<typename MetadataUidsT = Aws::Vector<Aws::String>>
    void SetMetadataUids(MetadataUidsT&& value) { m_metadataUidsHasBeenSet = true; m_metadataUids = std::forward<MetadataUidsT>(value); }
    template<typename MetadataUidsT = Aws::Vector<Aws::String>>
    BatchUpdateFindingsV2Request& WithMetadataUids(MetadataUidsT&& value) { SetMetadataUids(std::forward<MetadataUidsT>(value)); return *this;}
    template<typename MetadataUidsT = Aws::String>
    BatchUpdateFindingsV2Request& AddMetadataUids(MetadataUidsT&& value) { m_metadataUidsHasBeenSet = true; m_metadataUids.emplace_back(std::forward<MetadataUidsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Provides information to identify a specific V2 finding.</p>
     */
    inline const Aws::Vector<OcsfFindingIdentifier>& GetFindingIdentifiers() const { return m_findingIdentifiers; }
    inline bool FindingIdentifiersHasBeenSet() const { return m_findingIdentifiersHasBeenSet; }
    template<typename FindingIdentifiersT = Aws::Vector<OcsfFindingIdentifier>>
    void SetFindingIdentifiers(FindingIdentifiersT&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers = std::forward<FindingIdentifiersT>(value); }
    template<typename FindingIdentifiersT = Aws::Vector<OcsfFindingIdentifier>>
    BatchUpdateFindingsV2Request& WithFindingIdentifiers(FindingIdentifiersT&& value) { SetFindingIdentifiers(std::forward<FindingIdentifiersT>(value)); return *this;}
    template<typename FindingIdentifiersT = OcsfFindingIdentifier>
    BatchUpdateFindingsV2Request& AddFindingIdentifiers(FindingIdentifiersT&& value) { m_findingIdentifiersHasBeenSet = true; m_findingIdentifiers.emplace_back(std::forward<FindingIdentifiersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The updated value for a user provided comment about the finding. Minimum
     * character length 1. Maximum character length 512.</p>
     */
    inline const Aws::String& GetComment() const { return m_comment; }
    inline bool CommentHasBeenSet() const { return m_commentHasBeenSet; }
    template<typename CommentT = Aws::String>
    void SetComment(CommentT&& value) { m_commentHasBeenSet = true; m_comment = std::forward<CommentT>(value); }
    template<typename CommentT = Aws::String>
    BatchUpdateFindingsV2Request& WithComment(CommentT&& value) { SetComment(std::forward<CommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated value for the normalized severity identifier. The severity ID is
     * an integer with the allowed enum values [0, 1, 2, 3, 4, 5, 99]. When customer
     * provides the updated severity ID, the string sibling severity will automatically
     * be updated in the finding.</p>
     */
    inline int GetSeverityId() const { return m_severityId; }
    inline bool SeverityIdHasBeenSet() const { return m_severityIdHasBeenSet; }
    inline void SetSeverityId(int value) { m_severityIdHasBeenSet = true; m_severityId = value; }
    inline BatchUpdateFindingsV2Request& WithSeverityId(int value) { SetSeverityId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The updated value for the normalized status identifier. The status ID is an
     * integer with the allowed enum values [0, 1, 2, 3, 4, 5, 6, 99]. When customer
     * provides the updated status ID, the string sibling status will automatically be
     * updated in the finding.</p>
     */
    inline int GetStatusId() const { return m_statusId; }
    inline bool StatusIdHasBeenSet() const { return m_statusIdHasBeenSet; }
    inline void SetStatusId(int value) { m_statusIdHasBeenSet = true; m_statusId = value; }
    inline BatchUpdateFindingsV2Request& WithStatusId(int value) { SetStatusId(value); return *this;}
    ///@}
  private:

    Aws::Vector<Aws::String> m_metadataUids;
    bool m_metadataUidsHasBeenSet = false;

    Aws::Vector<OcsfFindingIdentifier> m_findingIdentifiers;
    bool m_findingIdentifiersHasBeenSet = false;

    Aws::String m_comment;
    bool m_commentHasBeenSet = false;

    int m_severityId{0};
    bool m_severityIdHasBeenSet = false;

    int m_statusId{0};
    bool m_statusIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
