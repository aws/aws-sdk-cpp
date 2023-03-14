/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/tnb/Tnb_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/tnb/model/GetSolVnfInfo.h>
#include <aws/tnb/model/VnfInstantiationState.h>
#include <aws/tnb/model/GetSolFunctionInstanceMetadata.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
  class GetSolFunctionInstanceResult
  {
  public:
    AWS_TNB_API GetSolFunctionInstanceResult();
    AWS_TNB_API GetSolFunctionInstanceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_TNB_API GetSolFunctionInstanceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>Network function instance ARN.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>Network function instance ARN.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>Network function instance ARN.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>Network function instance ARN.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>Network function instance ARN.</p>
     */
    inline GetSolFunctionInstanceResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>Network function instance ARN.</p>
     */
    inline GetSolFunctionInstanceResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>Network function instance ARN.</p>
     */
    inline GetSolFunctionInstanceResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>Network function instance ID.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>Network function instance ID.</p>
     */
    inline void SetId(const Aws::String& value) { m_id = value; }

    /**
     * <p>Network function instance ID.</p>
     */
    inline void SetId(Aws::String&& value) { m_id = std::move(value); }

    /**
     * <p>Network function instance ID.</p>
     */
    inline void SetId(const char* value) { m_id.assign(value); }

    /**
     * <p>Network function instance ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>Network function instance ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>Network function instance ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithId(const char* value) { SetId(value); return *this;}


    
    inline const GetSolVnfInfo& GetInstantiatedVnfInfo() const{ return m_instantiatedVnfInfo; }

    
    inline void SetInstantiatedVnfInfo(const GetSolVnfInfo& value) { m_instantiatedVnfInfo = value; }

    
    inline void SetInstantiatedVnfInfo(GetSolVnfInfo&& value) { m_instantiatedVnfInfo = std::move(value); }

    
    inline GetSolFunctionInstanceResult& WithInstantiatedVnfInfo(const GetSolVnfInfo& value) { SetInstantiatedVnfInfo(value); return *this;}

    
    inline GetSolFunctionInstanceResult& WithInstantiatedVnfInfo(GetSolVnfInfo&& value) { SetInstantiatedVnfInfo(std::move(value)); return *this;}


    /**
     * <p>Network function instantiation state.</p>
     */
    inline const VnfInstantiationState& GetInstantiationState() const{ return m_instantiationState; }

    /**
     * <p>Network function instantiation state.</p>
     */
    inline void SetInstantiationState(const VnfInstantiationState& value) { m_instantiationState = value; }

    /**
     * <p>Network function instantiation state.</p>
     */
    inline void SetInstantiationState(VnfInstantiationState&& value) { m_instantiationState = std::move(value); }

    /**
     * <p>Network function instantiation state.</p>
     */
    inline GetSolFunctionInstanceResult& WithInstantiationState(const VnfInstantiationState& value) { SetInstantiationState(value); return *this;}

    /**
     * <p>Network function instantiation state.</p>
     */
    inline GetSolFunctionInstanceResult& WithInstantiationState(VnfInstantiationState&& value) { SetInstantiationState(std::move(value)); return *this;}


    
    inline const GetSolFunctionInstanceMetadata& GetMetadata() const{ return m_metadata; }

    
    inline void SetMetadata(const GetSolFunctionInstanceMetadata& value) { m_metadata = value; }

    
    inline void SetMetadata(GetSolFunctionInstanceMetadata&& value) { m_metadata = std::move(value); }

    
    inline GetSolFunctionInstanceResult& WithMetadata(const GetSolFunctionInstanceMetadata& value) { SetMetadata(value); return *this;}

    
    inline GetSolFunctionInstanceResult& WithMetadata(GetSolFunctionInstanceMetadata&& value) { SetMetadata(std::move(value)); return *this;}


    /**
     * <p>Network instance ID.</p>
     */
    inline const Aws::String& GetNsInstanceId() const{ return m_nsInstanceId; }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetNsInstanceId(const Aws::String& value) { m_nsInstanceId = value; }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetNsInstanceId(Aws::String&& value) { m_nsInstanceId = std::move(value); }

    /**
     * <p>Network instance ID.</p>
     */
    inline void SetNsInstanceId(const char* value) { m_nsInstanceId.assign(value); }

    /**
     * <p>Network instance ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithNsInstanceId(const Aws::String& value) { SetNsInstanceId(value); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithNsInstanceId(Aws::String&& value) { SetNsInstanceId(std::move(value)); return *this;}

    /**
     * <p>Network instance ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithNsInstanceId(const char* value) { SetNsInstanceId(value); return *this;}


    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetTags() const{ return m_tags; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(const Aws::Map<Aws::String, Aws::String>& value) { m_tags = value; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline void SetTags(Aws::Map<Aws::String, Aws::String>&& value) { m_tags = std::move(value); }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& WithTags(const Aws::Map<Aws::String, Aws::String>& value) { SetTags(value); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& WithTags(Aws::Map<Aws::String, Aws::String>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(const Aws::String& key, const Aws::String& value) { m_tags.emplace(key, value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(Aws::String&& key, const Aws::String& value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(const Aws::String& key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(Aws::String&& key, Aws::String&& value) { m_tags.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(const char* key, Aws::String&& value) { m_tags.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(Aws::String&& key, const char* value) { m_tags.emplace(std::move(key), value); return *this; }

    /**
     * <p>A tag is a label that you assign to an Amazon Web Services resource. Each tag
     * consists of a key and an optional value. You can use tags to search and filter
     * your resources or track your Amazon Web Services costs.</p>
     */
    inline GetSolFunctionInstanceResult& AddTags(const char* key, const char* value) { m_tags.emplace(key, value); return *this; }


    /**
     * <p>Function package ID.</p>
     */
    inline const Aws::String& GetVnfPkgId() const{ return m_vnfPkgId; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetVnfPkgId(const Aws::String& value) { m_vnfPkgId = value; }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetVnfPkgId(Aws::String&& value) { m_vnfPkgId = std::move(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline void SetVnfPkgId(const char* value) { m_vnfPkgId.assign(value); }

    /**
     * <p>Function package ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfPkgId(const Aws::String& value) { SetVnfPkgId(value); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfPkgId(Aws::String&& value) { SetVnfPkgId(std::move(value)); return *this;}

    /**
     * <p>Function package ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfPkgId(const char* value) { SetVnfPkgId(value); return *this;}


    /**
     * <p>Network function product name.</p>
     */
    inline const Aws::String& GetVnfProductName() const{ return m_vnfProductName; }

    /**
     * <p>Network function product name.</p>
     */
    inline void SetVnfProductName(const Aws::String& value) { m_vnfProductName = value; }

    /**
     * <p>Network function product name.</p>
     */
    inline void SetVnfProductName(Aws::String&& value) { m_vnfProductName = std::move(value); }

    /**
     * <p>Network function product name.</p>
     */
    inline void SetVnfProductName(const char* value) { m_vnfProductName.assign(value); }

    /**
     * <p>Network function product name.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfProductName(const Aws::String& value) { SetVnfProductName(value); return *this;}

    /**
     * <p>Network function product name.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfProductName(Aws::String&& value) { SetVnfProductName(std::move(value)); return *this;}

    /**
     * <p>Network function product name.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfProductName(const char* value) { SetVnfProductName(value); return *this;}


    /**
     * <p>Network function provider.</p>
     */
    inline const Aws::String& GetVnfProvider() const{ return m_vnfProvider; }

    /**
     * <p>Network function provider.</p>
     */
    inline void SetVnfProvider(const Aws::String& value) { m_vnfProvider = value; }

    /**
     * <p>Network function provider.</p>
     */
    inline void SetVnfProvider(Aws::String&& value) { m_vnfProvider = std::move(value); }

    /**
     * <p>Network function provider.</p>
     */
    inline void SetVnfProvider(const char* value) { m_vnfProvider.assign(value); }

    /**
     * <p>Network function provider.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfProvider(const Aws::String& value) { SetVnfProvider(value); return *this;}

    /**
     * <p>Network function provider.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfProvider(Aws::String&& value) { SetVnfProvider(std::move(value)); return *this;}

    /**
     * <p>Network function provider.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfProvider(const char* value) { SetVnfProvider(value); return *this;}


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
    inline GetSolFunctionInstanceResult& WithVnfdId(const Aws::String& value) { SetVnfdId(value); return *this;}

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfdId(Aws::String&& value) { SetVnfdId(std::move(value)); return *this;}

    /**
     * <p>Function package descriptor ID.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfdId(const char* value) { SetVnfdId(value); return *this;}


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
    inline GetSolFunctionInstanceResult& WithVnfdVersion(const Aws::String& value) { SetVnfdVersion(value); return *this;}

    /**
     * <p>Function package descriptor version.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfdVersion(Aws::String&& value) { SetVnfdVersion(std::move(value)); return *this;}

    /**
     * <p>Function package descriptor version.</p>
     */
    inline GetSolFunctionInstanceResult& WithVnfdVersion(const char* value) { SetVnfdVersion(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline GetSolFunctionInstanceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline GetSolFunctionInstanceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline GetSolFunctionInstanceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_id;

    GetSolVnfInfo m_instantiatedVnfInfo;

    VnfInstantiationState m_instantiationState;

    GetSolFunctionInstanceMetadata m_metadata;

    Aws::String m_nsInstanceId;

    Aws::Map<Aws::String, Aws::String> m_tags;

    Aws::String m_vnfPkgId;

    Aws::String m_vnfProductName;

    Aws::String m_vnfProvider;

    Aws::String m_vnfdId;

    Aws::String m_vnfdVersion;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace tnb
} // namespace Aws
