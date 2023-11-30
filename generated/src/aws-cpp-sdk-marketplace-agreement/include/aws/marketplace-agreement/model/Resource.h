/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/marketplace-agreement/AgreementService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace AgreementService
{
namespace Model
{

  /**
   * <p>The list of resources involved in the agreement.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/marketplace-agreement-2020-03-01/Resource">AWS
   * API Reference</a></p>
   */
  class Resource
  {
  public:
    AWS_AGREEMENTSERVICE_API Resource();
    AWS_AGREEMENTSERVICE_API Resource(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Resource& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_AGREEMENTSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline Resource& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline Resource& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier of the resource.</p>  <p>We mention the term
     * resource, which is most commonly a product, so a <code>resourceId</code> is also
     * a <code>productId</code>.</p> 
     */
    inline Resource& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline const Aws::String& GetType() const{ return m_type; }

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline void SetType(const Aws::String& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline void SetType(Aws::String&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline void SetType(const char* value) { m_typeHasBeenSet = true; m_type.assign(value); }

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline Resource& WithType(const Aws::String& value) { SetType(value); return *this;}

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline Resource& WithType(Aws::String&& value) { SetType(std::move(value)); return *this;}

    /**
     * <p>Type of the resource, which is the product. Values include
     * <code>SaaSProduct</code> or <code>AmiProduct</code>.</p>
     */
    inline Resource& WithType(const char* value) { SetType(value); return *this;}

  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace AgreementService
} // namespace Aws
