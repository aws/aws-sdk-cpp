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


    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline PutSolFunctionPackageContentResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline PutSolFunctionPackageContentResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline PutSolFunctionPackageContentResult& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Function package metadata.</p>
     */
    inline const PutSolFunctionPackageContentMetadata& GetMetadata() const{ return m_metadata; }

    /**
     * <p>Function package metadata.</p>
     */
    inline void SetMetadata(const PutSolFunctionPackageContentMetadata& value) { m_metadata = value; }

    /**
     * <p>Function package metadata.</p>
     */
    inline void SetMetadata(PutSolFunctionPackageContentMetadata&& value) { m_metadata = std::move(value); }

    /**
     * <p>Function package metadata.</p>
     */
    inline PutSolFunctionPackageContentResult& WithMetadata(const PutSolFunctionPackageContentMetadata& value) { SetMetadata(value); return *this;}

    /**
     * <p>Function package metadata.</p>
     */
    inline PutSolFunctionPackageContentResult& WithMetadata(PutSolFunctionPackageContentMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Function product name.</p>
     */
    inline const Aws::String& GetVnfProductName() const{ return m_vnfProductName; }

    /**
     * <p>Function product name.</p>
     */
    inline void SetVnfProductName(const Aws::String& value) { m_vnfProductName = value; }

    /**
     * <p>Function product name.</p>
     */
    inline void SetVnfProductName(Aws::String&& value) { m_vnfProductName = std::move(value); }

    /**
     * <p>Function product name.</p>
     */
    inline void SetVnfProductName(const char* value) { m_vnfProductName.assign(value); }

    /**
     * <p>Function product name.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfProductName(const Aws::String& value) { SetVnfProductName(value); return *this;}

    /**
     * <p>Function product name.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfProductName(Aws::String&& value) { SetVnfProductName(std::move(value)); return *this;}

    /**
     * <p>Function product name.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfProductName(const char* value) { SetVnfProductName(value); return *this;}


    /**
     * <p>Function provider.</p>
     */
    inline const Aws::String& GetVnfProvider() const{ return m_vnfProvider; }

    /**
     * <p>Function provider.</p>
     */
    inline void SetVnfProvider(const Aws::String& value) { m_vnfProvider = value; }

    /**
     * <p>Function provider.</p>
     */
    inline void SetVnfProvider(Aws::String&& value) { m_vnfProvider = std::move(value); }

    /**
     * <p>Function provider.</p>
     */
    inline void SetVnfProvider(const char* value) { m_vnfProvider.assign(value); }

    /**
     * <p>Function provider.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfProvider(const Aws::String& value) { SetVnfProvider(value); return *this;}

    /**
     * <p>Function provider.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfProvider(Aws::String&& value) { SetVnfProvider(std::move(value)); return *this;}

    /**
     * <p>Function provider.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfProvider(const char* value) { SetVnfProvider(value); return *this;}


    /**
     * <p>Function package descriptor ID.</p>
     */
    inline const Aws::String& GetVnfdId() const{ return m_vnfdId; }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline void SetVnfdId(const Aws::String& value) { m_vnfdId = value; }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline void SetVnfdId(Aws::String&& value) { m_vnfdId = std::move(value); }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline void SetVnfdId(const char* value) { m_vnfdId.assign(value); }

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfdId(const Aws::String& value) { SetVnfdId(value); return *this;}

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfdId(Aws::String&& value) { SetVnfdId(std::move(value)); return *this;}

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfdId(const char* value) { SetVnfdId(value); return *this;}


    /**
     * <p>Function package descriptor version.</p>
     */
    inline const Aws::String& GetVnfdVersion() const{ return m_vnfdVersion; }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline void SetVnfdVersion(const Aws::String& value) { m_vnfdVersion = value; }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline void SetVnfdVersion(Aws::String&& value) { m_vnfdVersion = std::move(value); }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline void SetVnfdVersion(const char* value) { m_vnfdVersion.assign(value); }

    /**
     * <p>Function package descriptor version.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfdVersion(const Aws::String& value) { SetVnfdVersion(value); return *this;}

    /**
     * <p>Function package descriptor version.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfdVersion(Aws::String&& value) { SetVnfdVersion(std::move(value)); return *this;}

    /**
     * <p>Function package descriptor version.</p>
     */
    inline PutSolFunctionPackageContentResult& WithVnfdVersion(const char* value) { SetVnfdVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline PutSolFunctionPackageContentResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline PutSolFunctionPackageContentResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline PutSolFunctionPackageContentResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

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
