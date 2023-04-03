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
   * <p> The unique key-value pair for a tag that identifies provisioned product
   * resources. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/UniqueTagResourceIdentifier">AWS
   * API Reference</a></p>
   */
  class UniqueTagResourceIdentifier
  {
  public:
    AWS_SERVICECATALOG_API UniqueTagResourceIdentifier();
    AWS_SERVICECATALOG_API UniqueTagResourceIdentifier(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API UniqueTagResourceIdentifier& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline const Aws::String& GetKey() const{ return m_key; }

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline void SetKey(const Aws::String& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline void SetKey(Aws::String&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline void SetKey(const char* value) { m_keyHasBeenSet = true; m_key.assign(value); }

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline UniqueTagResourceIdentifier& WithKey(const Aws::String& value) { SetKey(value); return *this;}

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline UniqueTagResourceIdentifier& WithKey(Aws::String&& value) { SetKey(std::move(value)); return *this;}

    /**
     * <p> A unique key that's attached to a resource. </p>
     */
    inline UniqueTagResourceIdentifier& WithKey(const char* value) { SetKey(value); return *this;}


    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline UniqueTagResourceIdentifier& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline UniqueTagResourceIdentifier& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p> A unique value that's attached to a resource. </p>
     */
    inline UniqueTagResourceIdentifier& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    Aws::String m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
