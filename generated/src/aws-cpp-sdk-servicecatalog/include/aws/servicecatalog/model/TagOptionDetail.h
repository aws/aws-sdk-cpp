/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
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
namespace ServiceCatalog
{
namespace Model
{

  /**
   * <p>Information about a TagOption.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/TagOptionDetail">AWS
   * API Reference</a></p>
   */
  class TagOptionDetail
  {
  public:
    AWS_SERVICECATALOG_API TagOptionDetail();
    AWS_SERVICECATALOG_API TagOptionDetail(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API TagOptionDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The TagOption key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p>The TagOption key.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The TagOption key.</p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The TagOption key.</p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The TagOption key.</p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p>The TagOption key.</p>
     */
    inline TagOptionDetail& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p>The TagOption key.</p>
     */
    inline TagOptionDetail& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p>The TagOption key.</p>
     */
    inline TagOptionDetail& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p>The TagOption value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The TagOption value.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The TagOption value.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The TagOption value.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The TagOption value.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The TagOption value.</p>
     */
    inline TagOptionDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The TagOption value.</p>
     */
    inline TagOptionDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The TagOption value.</p>
     */
    inline TagOptionDetail& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The TagOption active state.</p>
     */
    inline bool GetActive() const{ return m_active; }

    /**
     * <p>The TagOption active state.</p>
     */
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }

    /**
     * <p>The TagOption active state.</p>
     */
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }

    /**
     * <p>The TagOption active state.</p>
     */
    inline TagOptionDetail& WithActive(bool value) { SetActive(value); return *this;}


    /**
     * <p>The TagOption identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }

    /**
     * <p>The TagOption identifier.</p>
     */
    inline TagOptionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}

    /**
     * <p>The TagOption identifier.</p>
     */
    inline TagOptionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}

    /**
     * <p>The TagOption identifier.</p>
     */
    inline TagOptionDetail& WithId(const char* value) { SetId(value); return *this;}


    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline TagOptionDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline TagOptionDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline TagOptionDetail& WithOwner(const char* value) { SetOwner(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    bool m_active;
    bool m_activeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
