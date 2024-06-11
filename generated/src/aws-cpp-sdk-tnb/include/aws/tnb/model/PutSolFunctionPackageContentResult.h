/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/PutSolFunctionPackageContentMetadata.h>
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
  class PutSolFunctionPackageContentResult
  {
  public:
    AWS_TNB_API PutSolFunctionPackageContentResult();
    AWS_TNB_API PutSolFunctionPackageContentResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API PutSolFunctionPackageContentResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline void SetId(const Aws::String& value) { m_id = value; }
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }
    inline void SetId(const char* value) { m_id.assign(value); }
    inline PutSolFunctionPackageContentResult& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline PutSolFunctionPackageContentResult& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package metadata.</p>
     */
    inline const PutSolFunctionPackageContentMetadata& GetMetadata() const{ return m_metadata; }
    inline void SetMetadata(const PutSolFunctionPackageContentMetadata& value) { m_metadata = value; }
    inline void SetMetadata(PutSolFunctionPackageContentMetadata&& value) { m_metadata = std::move(value); }
    inline PutSolFunctionPackageContentResult& WithMetadata(const PutSolFunctionPackageContentMetadata& value) { SetMetadata(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithMetadata(PutSolFunctionPackageContentMetadata&& value) { SetMetadata(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function product name.</p>
     */
    inline const Aws::String& GetVnfProductName() const{ return m_vnfProductName; }
    inline void SetVnfProductName(const Aws::String& value) { m_vnfProductName = value; }
    inline void SetVnfProductName(Aws::String&& value) { m_vnfProductName = std::move(value); }
    inline void SetVnfProductName(const char* value) { m_vnfProductName.assign(value); }
    inline PutSolFunctionPackageContentResult& WithVnfProductName(const Aws::String& value) { SetVnfProductName(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfProductName(Aws::String&& value) { SetVnfProductName(std::move(value)); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfProductName(const char* value) { SetVnfProductName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function provider.</p>
     */
    inline const Aws::String& GetVnfProvider() const{ return m_vnfProvider; }
    inline void SetVnfProvider(const Aws::String& value) { m_vnfProvider = value; }
    inline void SetVnfProvider(Aws::String&& value) { m_vnfProvider = std::move(value); }
    inline void SetVnfProvider(const char* value) { m_vnfProvider.assign(value); }
    inline PutSolFunctionPackageContentResult& WithVnfProvider(const Aws::String& value) { SetVnfProvider(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfProvider(Aws::String&& value) { SetVnfProvider(std::move(value)); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfProvider(const char* value) { SetVnfProvider(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package descriptor ID.</p>
     */
    inline const Aws::String& GetVnfdId() const{ return m_vnfdId; }
    inline void SetVnfdId(const Aws::String& value) { m_vnfdId = value; }
    inline void SetVnfdId(Aws::String&& value) { m_vnfdId = std::move(value); }
    inline void SetVnfdId(const char* value) { m_vnfdId.assign(value); }
    inline PutSolFunctionPackageContentResult& WithVnfdId(const Aws::String& value) { SetVnfdId(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfdId(Aws::String&& value) { SetVnfdId(std::move(value)); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfdId(const char* value) { SetVnfdId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Function package descriptor version.</p>
     */
    inline const Aws::String& GetVnfdVersion() const{ return m_vnfdVersion; }
    inline void SetVnfdVersion(const Aws::String& value) { m_vnfdVersion = value; }
    inline void SetVnfdVersion(Aws::String&& value) { m_vnfdVersion = std::move(value); }
    inline void SetVnfdVersion(const char* value) { m_vnfdVersion.assign(value); }
    inline PutSolFunctionPackageContentResult& WithVnfdVersion(const Aws::String& value) { SetVnfdVersion(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfdVersion(Aws::String&& value) { SetVnfdVersion(std::move(value)); return *this;}
    inline PutSolFunctionPackageContentResult& WithVnfdVersion(const char* value) { SetVnfdVersion(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline PutSolFunctionPackageContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline PutSolFunctionPackageContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline PutSolFunctionPackageContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_id;

    PutSolFunctionPackageContentMetadata m_metadata;

    Aws::String m_vnfProductName;

    Aws::String m_vnfProvider;

    Aws::String m_vnfdId;

    Aws::String m_vnfdVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
