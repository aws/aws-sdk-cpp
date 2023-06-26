/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AssociationExecutionTargetsFilterKey.h>
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
namespace SSM
{
namespace Model
{

  /**
   * <p>Filters for the association execution.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/AssociationExecutionTargetsFilter">AWS
   * API Reference</a></p>
   */
  class AssociationExecutionTargetsFilter
  {
  public:
    AWS_SSM_API AssociationExecutionTargetsFilter();
    AWS_SSM_API AssociationExecutionTargetsFilter(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API AssociationExecutionTargetsFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The key value used in the request.</p>
     */
    inline const AssociationExecutionTargetsFilterKey& GetKey() const{ return m_key; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline bool KeyHasBeenSet() const { return m_keyHasBeenSet; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline void SetKey(const AssociationExecutionTargetsFilterKey& value) { m_keyHasBeenSet = true; m_key = value; }

    /**
     * <p>The key value used in the request.</p>
     */
    inline void SetKey(AssociationExecutionTargetsFilterKey&& value) { m_keyHasBeenSet = true; m_key = std::move(value); }

    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionTargetsFilter& WithKey(const AssociationExecutionTargetsFilterKey& value) { SetKey(value); return *this;}

    /**
     * <p>The key value used in the request.</p>
     */
    inline AssociationExecutionTargetsFilter& WithKey(AssociationExecutionTargetsFilterKey&& value) { SetKey(std::move(value)); return *this;}


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
    inline AssociationExecutionTargetsFilter& WithValue(const Aws::String& value) { SetValue(value); return *this;}

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionTargetsFilter& WithValue(Aws::String&& value) { SetValue(std::move(value)); return *this;}

    /**
     * <p>The value specified for the key.</p>
     */
    inline AssociationExecutionTargetsFilter& WithValue(const char* value) { SetValue(value); return *this;}

  private:

    AssociationExecutionTargetsFilterKey m_key;
    bool m_keyHasBeenSet = false;

    Aws::String m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace SSM
} // namespace Aws
