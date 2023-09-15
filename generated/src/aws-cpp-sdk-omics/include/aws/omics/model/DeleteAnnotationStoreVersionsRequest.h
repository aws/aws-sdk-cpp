/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/omics/Omics_EXPORTS.h>
#include <aws/omics/OmicsRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace Omics
{
namespace Model
{

  /**
   */
  class DeleteAnnotationStoreVersionsRequest : public OmicsRequest
  {
  public:
    AWS_OMICS_API DeleteAnnotationStoreVersionsRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAnnotationStoreVersions"; }

    AWS_OMICS_API Aws::String SerializePayload() const override;

    AWS_OMICS_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p> The name of the annotation store from which versions are being deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline const Aws::Vector<Aws::String>& GetVersions() const{ return m_versions; }

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline bool VersionsHasBeenSet() const { return m_versionsHasBeenSet; }

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline void SetVersions(const Aws::Vector<Aws::String>& value) { m_versionsHasBeenSet = true; m_versions = value; }

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline void SetVersions(Aws::Vector<Aws::String>&& value) { m_versionsHasBeenSet = true; m_versions = std::move(value); }

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& WithVersions(const Aws::Vector<Aws::String>& value) { SetVersions(value); return *this;}

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& WithVersions(Aws::Vector<Aws::String>&& value) { SetVersions(std::move(value)); return *this;}

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& AddVersions(const Aws::String& value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& AddVersions(Aws::String&& value) { m_versionsHasBeenSet = true; m_versions.push_back(std::move(value)); return *this; }

    /**
     * <p> The versions of an annotation store to be deleted. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& AddVersions(const char* value) { m_versionsHasBeenSet = true; m_versions.push_back(value); return *this; }


    /**
     * <p> Forces the deletion of an annotation store version when imports are
     * in-progress.. </p>
     */
    inline bool GetForce() const{ return m_force; }

    /**
     * <p> Forces the deletion of an annotation store version when imports are
     * in-progress.. </p>
     */
    inline bool ForceHasBeenSet() const { return m_forceHasBeenSet; }

    /**
     * <p> Forces the deletion of an annotation store version when imports are
     * in-progress.. </p>
     */
    inline void SetForce(bool value) { m_forceHasBeenSet = true; m_force = value; }

    /**
     * <p> Forces the deletion of an annotation store version when imports are
     * in-progress.. </p>
     */
    inline DeleteAnnotationStoreVersionsRequest& WithForce(bool value) { SetForce(value); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Vector<Aws::String> m_versions;
    bool m_versionsHasBeenSet = false;

    bool m_force;
    bool m_forceHasBeenSet = false;
  };

} // namespace Model
} // namespace Omics
} // namespace Aws
