/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationExecutionFilterKey.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/ssm/model/AssociationFilterOperatorType.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Filters used in the request.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionFilter">AWS
   * API Reference</a></p>
   */
  class AssociationExecutionFilter
  {
  public:
    AWS_SSM_API AssociationExecutionFilter();
    AWS_SSM_API AssociationExecutionFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationExecutionFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key value used in the request.</p>
     */
    inline const AssociationExecutionFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline void SetKey(const AssociationExecutionFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline void SetKey(AssociationExecutionFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionFilter& WithKey(const AssociationExecutionFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionFilter& WithKey(AssociationExecutionFilterKey&& value) { SetKey(std::move(value)); return *this;}


    /**
     * <p>The value specified for the key.</p>
     */
    inline const Aws::String& GetValue() const{ return m_value; }

    /**
     * <p>The value specified for the key.</p>
     */
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }

    /**
     * <p>The value specified for the key.</p>
     */
    inline void SetValue(const Aws::String& value) { m_valueHasBeenSet = true; m_value = value; }

    /**
     * <p>The value specified for the key.</p>
     */
    inline void SetValue(Aws::String&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }

    /**
     * <p>The value specified for the key.</p>
     */
    inline void SetValue(const char* value) { m_valueHasBeenSet = true; m_value.assign(value); }

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionFilter& WithValue(const char* value) { SetValue(value); return *this;}


    /**
     * <p>The filter type specified in the request.</p>
     */
    inline const AssociationFilterOperatorType& GetType() const{ return m_type; }

    /**
     * <p>The filter type specified in the request.</p>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The filter type specified in the request.</p>
     */
    inline void SetType(const AssociationFilterOperatorType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The filter type specified in the request.</p>
     */
    inline void SetType(AssociationFilterOperatorType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The filter type specified in the request.</p>
     */
    inline AssociationExecutionFilter& WithType(const AssociationFilterOperatorType& value) { SetType(value); return *this;}

    /**
     * <p>The filter type specified in the request.</p>
     */
    inline AssociationExecutionFilter& WithType(AssociationFilterOperatorType&& value) { SetType(std::move(value)); return *this;}

  private:

    AssociationExecutionFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;

    AssociationFilterOperatorType m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
