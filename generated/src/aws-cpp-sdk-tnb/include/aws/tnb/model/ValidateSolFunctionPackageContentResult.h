/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/ValidateSolFunctionPackageContentMetadata.h>
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
namespace tnb
{
namespace Model
{
  class ValidateSolFunctionPackageContentResult
  {
  public:
    AWS_TNB_API ValidateSolFunctionPackageContentResult() = default;
    AWS_TNB_API ValidateSolFunctionPackageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API ValidateSolFunctionPackageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    ValidateSolFunctionPackageContentResult& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package metadata.</p>
     */
    inline const ValidateSolFunctionPackageContentMetadata& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = ValidateSolFunctionPackageContentMetadata>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = ValidateSolFunctionPackageContentMetadata>
    ValidateSolFunctionPackageContentResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function product name.</p>
     */
    inline const Aws::String& GetVnfProductName() const { return m_vnfProductName; }
    template<typename VnfProductNameT = Aws::String>
    void SetVnfProductName(VnfProductNameT&& value) { m_vnfProductNameHasBeenSet = true; m_vnfProductName = std::forward<VnfProductNameT>(value); }
    template<typename VnfProductNameT = Aws::String>
    ValidateSolFunctionPackageContentResult& WithVnfProductName(VnfProductNameT&& value) { SetVnfProductName(std::forward<VnfProductNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Network function provider.</p>
     */
    inline const Aws::String& GetVnfProvider() const { return m_vnfProvider; }
    template<typename VnfProviderT = Aws::String>
    void SetVnfProvider(VnfProviderT&& value) { m_vnfProviderHasBeenSet = true; m_vnfProvider = std::forward<VnfProviderT>(value); }
    template<typename VnfProviderT = Aws::String>
    ValidateSolFunctionPackageContentResult& WithVnfProvider(VnfProviderT&& value) { SetVnfProvider(std::forward<VnfProviderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package descriptor ID.</p>
     */
    inline const Aws::String& GetVnfdId() const { return m_vnfdId; }
    template<typename VnfdIdT = Aws::String>
    void SetVnfdId(VnfdIdT&& value) { m_vnfdIdHasBeenSet = true; m_vnfdId = std::forward<VnfdIdT>(value); }
    template<typename VnfdIdT = Aws::String>
    ValidateSolFunctionPackageContentResult& WithVnfdId(VnfdIdT&& value) { SetVnfdId(std::forward<VnfdIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package descriptor version.</p>
     */
    inline const Aws::String& GetVnfdVersion() const { return m_vnfdVersion; }
    template<typename VnfdVersionT = Aws::String>
    void SetVnfdVersion(VnfdVersionT&& value) { m_vnfdVersionHasBeenSet = true; m_vnfdVersion = std::forward<VnfdVersionT>(value); }
    template<typename VnfdVersionT = Aws::String>
    ValidateSolFunctionPackageContentResult& WithVnfdVersion(VnfdVersionT&& value) { SetVnfdVersion(std::forward<VnfdVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ValidateSolFunctionPackageContentResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    ValidateSolFunctionPackageContentMetadata m_metadata;
    bool m_metadataHasBeenSet = false;

    Aws::String m_vnfProductName;
    bool m_vnfProductNameHasBeenSet = false;

    Aws::String m_vnfProvider;
    bool m_vnfProviderHasBeenSet = false;

    Aws::String m_vnfdId;
    bool m_vnfdIdHasBeenSet = false;

    Aws::String m_vnfdVersion;
    bool m_vnfdVersionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
