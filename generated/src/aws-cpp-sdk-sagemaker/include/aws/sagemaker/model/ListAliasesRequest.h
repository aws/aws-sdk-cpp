/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class ListAliasesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API ListAliasesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListAliases"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    /**
     * <p>The name of the image.</p>
     */
    inline const Aws::String& GetImageName() const{ return m_imageName; }

    /**
     * <p>The name of the image.</p>
     */
    inline bool ImageNameHasBeenSet() const { return m_imageNameHasBeenSet; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(const Aws::String& value) { m_imageNameHasBeenSet = true; m_imageName = value; }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(Aws::String&& value) { m_imageNameHasBeenSet = true; m_imageName = std::move(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline void SetImageName(const char* value) { m_imageNameHasBeenSet = true; m_imageName.assign(value); }

    /**
     * <p>The name of the image.</p>
     */
    inline ListAliasesRequest& WithImageName(const Aws::String& value) { SetImageName(value); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline ListAliasesRequest& WithImageName(Aws::String&& value) { SetImageName(std::move(value)); return *this;}

    /**
     * <p>The name of the image.</p>
     */
    inline ListAliasesRequest& WithImageName(const char* value) { SetImageName(value); return *this;}


    /**
     * <p>The alias of the image version.</p>
     */
    inline const Aws::String& GetAlias() const{ return m_alias; }

    /**
     * <p>The alias of the image version.</p>
     */
    inline bool AliasHasBeenSet() const { return m_aliasHasBeenSet; }

    /**
     * <p>The alias of the image version.</p>
     */
    inline void SetAlias(const Aws::String& value) { m_aliasHasBeenSet = true; m_alias = value; }

    /**
     * <p>The alias of the image version.</p>
     */
    inline void SetAlias(Aws::String&& value) { m_aliasHasBeenSet = true; m_alias = std::move(value); }

    /**
     * <p>The alias of the image version.</p>
     */
    inline void SetAlias(const char* value) { m_aliasHasBeenSet = true; m_alias.assign(value); }

    /**
     * <p>The alias of the image version.</p>
     */
    inline ListAliasesRequest& WithAlias(const Aws::String& value) { SetAlias(value); return *this;}

    /**
     * <p>The alias of the image version.</p>
     */
    inline ListAliasesRequest& WithAlias(Aws::String&& value) { SetAlias(std::move(value)); return *this;}

    /**
     * <p>The alias of the image version.</p>
     */
    inline ListAliasesRequest& WithAlias(const char* value) { SetAlias(value); return *this;}


    /**
     * <p>The version of the image. If image version is not specified, the aliases of
     * all versions of the image are listed.</p>
     */
    inline int GetVersion() const{ return m_version; }

    /**
     * <p>The version of the image. If image version is not specified, the aliases of
     * all versions of the image are listed.</p>
     */
    inline bool VersionHasBeenSet() const { return m_versionHasBeenSet; }

    /**
     * <p>The version of the image. If image version is not specified, the aliases of
     * all versions of the image are listed.</p>
     */
    inline void SetVersion(int value) { m_versionHasBeenSet = true; m_version = value; }

    /**
     * <p>The version of the image. If image version is not specified, the aliases of
     * all versions of the image are listed.</p>
     */
    inline ListAliasesRequest& WithVersion(int value) { SetVersion(value); return *this;}


    /**
     * <p>The maximum number of aliases to return.</p>
     */
    inline int GetMaxResults() const{ return m_maxResults; }

    /**
     * <p>The maximum number of aliases to return.</p>
     */
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }

    /**
     * <p>The maximum number of aliases to return.</p>
     */
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }

    /**
     * <p>The maximum number of aliases to return.</p>
     */
    inline ListAliasesRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}


    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline ListAliasesRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline ListAliasesRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>If the previous call to <code>ListAliases</code> didn't return the full set
     * of aliases, the call returns a token for retrieving the next set of aliases.</p>
     */
    inline ListAliasesRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_imageName;
    bool m_imageNameHasBeenSet = false;

    Aws::String m_alias;
    bool m_aliasHasBeenSet = false;

    int m_version;
    bool m_versionHasBeenSet = false;

    int m_maxResults;
    bool m_maxResultsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
