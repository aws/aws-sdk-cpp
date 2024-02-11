/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace QuickSight
{
namespace Model
{
  class StartAssetBundleImportJobResult
  {
  public:
    AWS_QUICKSIGHT_API StartAssetBundleImportJobResult();
    AWS_QUICKSIGHT_API StartAssetBundleImportJobResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QUICKSIGHT_API StartAssetBundleImportJobResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline void SetArn(const Aws::String& value) { m_arn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline void SetArn(const char* value) { m_arn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline StartAssetBundleImportJobResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline StartAssetBundleImportJobResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) for the import job.</p>
     */
    inline StartAssetBundleImportJobResult& WithArn(const char* value) { SetArn(value); return *this;}


    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline const Aws::String& GetAssetBundleImportJobId() const{ return m_assetBundleImportJobId; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleImportJobId(const Aws::String& value) { m_assetBundleImportJobId = value; }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleImportJobId(Aws::String&& value) { m_assetBundleImportJobId = std::move(value); }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline void SetAssetBundleImportJobId(const char* value) { m_assetBundleImportJobId.assign(value); }

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline StartAssetBundleImportJobResult& WithAssetBundleImportJobId(const Aws::String& value) { SetAssetBundleImportJobId(value); return *this;}

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline StartAssetBundleImportJobResult& WithAssetBundleImportJobId(Aws::String&& value) { SetAssetBundleImportJobId(std::move(value)); return *this;}

    /**
     * <p>The ID of the job. This ID is unique while the job is running. After the job
     * is completed, you can reuse this ID for another job.</p>
     */
    inline StartAssetBundleImportJobResult& WithAssetBundleImportJobId(const char* value) { SetAssetBundleImportJobId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline StartAssetBundleImportJobResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline StartAssetBundleImportJobResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline StartAssetBundleImportJobResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}


    /**
     * <p>The HTTP status of the response.</p>
     */
    inline int GetStatus() const{ return m_status; }

    /**
     * <p>The HTTP status of the response.</p>
     */
    inline void SetStatus(int value) { m_status = value; }

    /**
     * <p>The HTTP status of the response.</p>
     */
    inline StartAssetBundleImportJobResult& WithStatus(int value) { SetStatus(value); return *this;}

  private:

    Aws::String m_arn;

    Aws::String m_assetBundleImportJobId;

    Aws::String m_requestId;

    int m_status;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
