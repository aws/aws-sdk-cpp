/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/ReferenceStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/omics/model/ReferenceFiles.h>
#include <aws/omics/model/ReferenceCreationType.h>
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
namespace Omics
{
namespace Model
{
  class GetReferenceMetadataResult
  {
  public:
    AWS_OMICS_API GetReferenceMetadataResult() = default;
    AWS_OMICS_API GetReferenceMetadataResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API GetReferenceMetadataResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The reference's ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    GetReferenceMetadataResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's ARN.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetReferenceMetadataResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's reference store ID.</p>
     */
    inline const Aws::String& GetReferenceStoreId() const { return m_referenceStoreId; }
    template<typename ReferenceStoreIdT = Aws::String>
    void SetReferenceStoreId(ReferenceStoreIdT&& value) { m_referenceStoreIdHasBeenSet = true; m_referenceStoreId = std::forward<ReferenceStoreIdT>(value); }
    template<typename ReferenceStoreIdT = Aws::String>
    GetReferenceMetadataResult& WithReferenceStoreId(ReferenceStoreIdT&& value) { SetReferenceStoreId(std::forward<ReferenceStoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's MD5 checksum.</p>
     */
    inline const Aws::String& GetMd5() const { return m_md5; }
    template<typename Md5T = Aws::String>
    void SetMd5(Md5T&& value) { m_md5HasBeenSet = true; m_md5 = std::forward<Md5T>(value); }
    template<typename Md5T = Aws::String>
    GetReferenceMetadataResult& WithMd5(Md5T&& value) { SetMd5(std::forward<Md5T>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's status.</p>
     */
    inline ReferenceStatus GetStatus() const { return m_status; }
    inline void SetStatus(ReferenceStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetReferenceMetadataResult& WithStatus(ReferenceStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's name.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetReferenceMetadataResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's description.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetReferenceMetadataResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the reference was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetReferenceMetadataResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>When the reference was updated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateTime() const { return m_updateTime; }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    void SetUpdateTime(UpdateTimeT&& value) { m_updateTimeHasBeenSet = true; m_updateTime = std::forward<UpdateTimeT>(value); }
    template<typename UpdateTimeT = Aws::Utils::DateTime>
    GetReferenceMetadataResult& WithUpdateTime(UpdateTimeT&& value) { SetUpdateTime(std::forward<UpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's files.</p>
     */
    inline const ReferenceFiles& GetFiles() const { return m_files; }
    template<typename FilesT = ReferenceFiles>
    void SetFiles(FilesT&& value) { m_filesHasBeenSet = true; m_files = std::forward<FilesT>(value); }
    template<typename FilesT = ReferenceFiles>
    GetReferenceMetadataResult& WithFiles(FilesT&& value) { SetFiles(std::forward<FilesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's creation type.</p>
     */
    inline ReferenceCreationType GetCreationType() const { return m_creationType; }
    inline void SetCreationType(ReferenceCreationType value) { m_creationTypeHasBeenSet = true; m_creationType = value; }
    inline GetReferenceMetadataResult& WithCreationType(ReferenceCreationType value) { SetCreationType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The reference's creation job ID.</p>
     */
    inline const Aws::String& GetCreationJobId() const { return m_creationJobId; }
    template<typename CreationJobIdT = Aws::String>
    void SetCreationJobId(CreationJobIdT&& value) { m_creationJobIdHasBeenSet = true; m_creationJobId = std::forward<CreationJobIdT>(value); }
    template<typename CreationJobIdT = Aws::String>
    GetReferenceMetadataResult& WithCreationJobId(CreationJobIdT&& value) { SetCreationJobId(std::forward<CreationJobIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetReferenceMetadataResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_referenceStoreId;
    bool m_referenceStoreIdHasBeenSet = false;

    Aws::String m_md5;
    bool m_md5HasBeenSet = false;

    ReferenceStatus m_status{ReferenceStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_updateTime{};
    bool m_updateTimeHasBeenSet = false;

    ReferenceFiles m_files;
    bool m_filesHasBeenSet = false;

    ReferenceCreationType m_creationType{ReferenceCreationType::NOT_SET};
    bool m_creationTypeHasBeenSet = false;

    Aws::String m_creationJobId;
    bool m_creationJobIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
