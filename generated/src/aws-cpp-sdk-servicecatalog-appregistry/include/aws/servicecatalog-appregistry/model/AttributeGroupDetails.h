﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog-appregistry/AppRegistry_EXPORTS.h>
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
namespace AppRegistry
{
namespace Model
{

  /**
   * <p> The details related to a specific AttributeGroup. </p><p><h3>See Also:</h3> 
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/AWS242AppRegistry-2020-06-24/AttributeGroupDetails">AWS
   * API Reference</a></p>
   */
  class AttributeGroupDetails
  {
  public:
    AWS_APPREGISTRY_API AttributeGroupDetails();
    AWS_APPREGISTRY_API AttributeGroupDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API AttributeGroupDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_APPREGISTRY_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier of the attribute group.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline AttributeGroupDetails& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline AttributeGroupDetails& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline AttributeGroupDetails& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon resource name (ARN) that specifies the attribute group.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline AttributeGroupDetails& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline AttributeGroupDetails& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline AttributeGroupDetails& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     *  <p> This field is no longer supported. We recommend you don't use
     * the field when using <code>ListAttributeGroupsForApplication</code>. </p>
     *  <p> The name of the attribute group. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline AttributeGroupDetails& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline AttributeGroupDetails& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline AttributeGroupDetails& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The service principal that created the attribute group.</p>
     */
    inline const Aws::String& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const Aws::String& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(Aws::String&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline void SetCreatedBy(const char* value) { m_createdByHasBeenSet = true; m_createdBy.assign(value); }
    inline AttributeGroupDetails& WithCreatedBy(const Aws::String& value) { SetCreatedBy(value); return *this;}
    inline AttributeGroupDetails& WithCreatedBy(Aws::String&& value) { SetCreatedBy(std::move(value)); return *this;}
    inline AttributeGroupDetails& WithCreatedBy(const char* value) { SetCreatedBy(value); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_createdBy;
    bool m_createdByHasBeenSet = false;
  };

} // namespace Model
} // namespace AppRegistry
} // namespace Aws
