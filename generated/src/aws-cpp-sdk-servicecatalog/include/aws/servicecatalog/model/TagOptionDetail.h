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


    ///@{
    /**
     * <p>The TagOption key.</p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }
    inline TagOptionDetail& WithKey(const Aws::String& value) { SetKey(value); return *this;}
    inline TagOptionDetail& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}
    inline TagOptionDetail& WithKey(const char* value) { SetKey(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TagOption value.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }
    inline TagOptionDetail& WithValue(const Aws::String& value) { SetValue(value); return *this;}
    inline TagOptionDetail& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}
    inline TagOptionDetail& WithValue(const char* value) { SetValue(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TagOption active state.</p>
     */
    inline bool GetActive() const{ return m_active; }
    inline bool ActiveHasBeenSet() const { return m_activeHasBeenSet; }
    inline void SetActive(bool value) { m_activeHasBeenSet = true; m_active = value; }
    inline TagOptionDetail& WithActive(bool value) { SetActive(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The TagOption identifier.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline TagOptionDetail& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline TagOptionDetail& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline TagOptionDetail& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account Id of the owner account that created the
     * TagOption.</p>
     */
    inline const Aws::String& GetOwner() const{ return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }
    inline TagOptionDetail& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}
    inline TagOptionDetail& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}
    inline TagOptionDetail& WithOwner(const char* value) { SetOwner(value); return *this;}
    ///@}
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
