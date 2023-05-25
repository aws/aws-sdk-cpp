/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteAccountCustomizationRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteAccountCustomizationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccountCustomization"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;

    AWS_QUICKSIGHT_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline DeleteAccountCustomizationRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline DeleteAccountCustomizationRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The ID for the Amazon Web Services account that you want to delete Amazon
     * QuickSight customizations from in this Amazon Web Services Region.</p>
     */
    inline DeleteAccountCustomizationRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline const Aws::String& GetNamespace() const{ return m_namespace; }

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline bool NamespaceHasBeenSet() const { return m_namespaceHasBeenSet; }

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline void SetNamespace(const Aws::String& value) { m_namespaceHasBeenSet = true; m_namespace = value; }

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline void SetNamespace(Aws::String&& value) { m_namespaceHasBeenSet = true; m_namespace = std::move(value); }

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline void SetNamespace(const char* value) { m_namespaceHasBeenSet = true; m_namespace.assign(value); }

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline DeleteAccountCustomizationRequest& WithNamespace(const Aws::String& value) { SetNamespace(value); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline DeleteAccountCustomizationRequest& WithNamespace(Aws::String&& value) { SetNamespace(std::move(value)); return *this;}

    /**
     * <p>The Amazon QuickSight namespace that you're deleting the customizations
     * from.</p>
     */
    inline DeleteAccountCustomizationRequest& WithNamespace(const char* value) { SetNamespace(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_namespace;
    bool m_namespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
