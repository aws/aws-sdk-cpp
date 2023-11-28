/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/DocumentAttributeValue.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A document attribute or metadata field.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/DocumentAttribute">AWS
   * API Reference</a></p>
   */
  class DocumentAttribute
  {
  public:
    AWS_QBUSINESS_API DocumentAttribute();
    AWS_QBUSINESS_API DocumentAttribute(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API DocumentAttribute& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The identifier for the attribute.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline DocumentAttribute& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline DocumentAttribute& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The identifier for the attribute.</p>
     */
    inline DocumentAttribute& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>The value of the attribute. </p>
     */
    inline const DocumentAttributeValue& GetValue() const{ return m_value; }

    /**
     * <p>The value of the attribute. </p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value of the attribute. </p>
     */
    inline void SetValue(const DocumentAttributeValue& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value of the attribute. </p>
     */
    inline void SetValue(DocumentAttributeValue&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value of the attribute. </p>
     */
    inline DocumentAttribute& WithValue(const DocumentAttributeValue& value) { SetValue(value); return *this;}

    /**
     * <p>The value of the attribute. </p>
     */
    inline DocumentAttribute& WithValue(DocumentAttributeValue&& value) { SetValue(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    DocumentAttributeValue m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
