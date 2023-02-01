/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ImageVersion.h>
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
namespace SageMaker
{
namespace Model
{
  class ListImageVersionsResult
  {
  public:
    AWS_SAGEMAKER_API ListImageVersionsResult();
    AWS_SAGEMAKER_API ListImageVersionsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListImageVersionsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A list of versions and their properties.</p>
     */
    inline const Aws::Vector<ImageVersion>& GetImageVersions() const{ return m_imageVersions; }

    /**
     * <p>A list of versions and their properties.</p>
     */
    inline void SetImageVersions(const Aws::Vector<ImageVersion>& value) { m_imageVersions = value; }

    /**
     * <p>A list of versions and their properties.</p>
     */
    inline void SetImageVersions(Aws::Vector<ImageVersion>&& value) { m_imageVersions = std::move(value); }

    /**
     * <p>A list of versions and their properties.</p>
     */
    inline ListImageVersionsResult& WithImageVersions(const Aws::Vector<ImageVersion>& value) { SetImageVersions(value); return *this;}

    /**
     * <p>A list of versions and their properties.</p>
     */
    inline ListImageVersionsResult& WithImageVersions(Aws::Vector<ImageVersion>&& value) { SetImageVersions(std::move(value)); return *this;}

    /**
     * <p>A list of versions and their properties.</p>
     */
    inline ListImageVersionsResult& AddImageVersions(const ImageVersion& value) { m_imageVersions.push_back(value); return *this; }

    /**
     * <p>A list of versions and their properties.</p>
     */
    inline ListImageVersionsResult& AddImageVersions(ImageVersion&& value) { m_imageVersions.push_back(std::move(value)); return *this; }


    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }

    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }

    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }

    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline ListImageVersionsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline ListImageVersionsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>A token for getting the next set of versions, if there are any.</p>
     */
    inline ListImageVersionsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::Vector<ImageVersion> m_imageVersions;

    Aws::String m_nextToken;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
