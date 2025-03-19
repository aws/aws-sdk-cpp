/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/omics/model/VersionOptions.h>
#include <aws/omics/model/VersionStatus.h>
#include <aws/core/utils/DateTime.h>
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
  class CreateAnnotationStoreVersionResult
  {
  public:
    AWS_OMICS_API CreateAnnotationStoreVersionResult() = default;
    AWS_OMICS_API CreateAnnotationStoreVersionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_OMICS_API CreateAnnotationStoreVersionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> A generated ID for the annotation store </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    CreateAnnotationStoreVersionResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline const Aws::String& GetVersionName() const { return m_versionName; }
    template<typename VersionNameT = Aws::String>
    void SetVersionName(VersionNameT&& value) { m_versionNameHasBeenSet = true; m_versionName = std::forward<VersionNameT>(value); }
    template<typename VersionNameT = Aws::String>
    CreateAnnotationStoreVersionResult& WithVersionName(VersionNameT&& value) { SetVersionName(std::forward<VersionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID for the annotation store from which new versions are being created.
     * </p>
     */
    inline const Aws::String& GetStoreId() const { return m_storeId; }
    template<typename StoreIdT = Aws::String>
    void SetStoreId(StoreIdT&& value) { m_storeIdHasBeenSet = true; m_storeId = std::forward<StoreIdT>(value); }
    template<typename StoreIdT = Aws::String>
    CreateAnnotationStoreVersionResult& WithStoreId(StoreIdT&& value) { SetStoreId(std::forward<StoreIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The options for an annotation store version. </p>
     */
    inline const VersionOptions& GetVersionOptions() const { return m_versionOptions; }
    template<typename VersionOptionsT = VersionOptions>
    void SetVersionOptions(VersionOptionsT&& value) { m_versionOptionsHasBeenSet = true; m_versionOptions = std::forward<VersionOptionsT>(value); }
    template<typename VersionOptionsT = VersionOptions>
    CreateAnnotationStoreVersionResult& WithVersionOptions(VersionOptionsT&& value) { SetVersionOptions(std::forward<VersionOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The name given to an annotation store version to distinguish it from other
     * versions. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateAnnotationStoreVersionResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The status of a annotation store version. </p>
     */
    inline VersionStatus GetStatus() const { return m_status; }
    inline void SetStatus(VersionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline CreateAnnotationStoreVersionResult& WithStatus(VersionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The time stamp for the creation of an annotation store version. </p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    CreateAnnotationStoreVersionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateAnnotationStoreVersionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_versionName;
    bool m_versionNameHasBeenSet = false;

    Aws::String m_storeId;
    bool m_storeIdHasBeenSet = false;

    VersionOptions m_versionOptions;
    bool m_versionOptionsHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    VersionStatus m_status{VersionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
