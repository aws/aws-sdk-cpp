/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/model/SsmParameterStoreParameterType.h>
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
namespace mgn
{
namespace Model
{

  /**
   * <p>AWS Systems Manager Parameter Store parameter.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/SsmParameterStoreParameter">AWS
   * API Reference</a></p>
   */
  class SsmParameterStoreParameter
  {
  public:
    AWS_MGN_API SsmParameterStoreParameter();
    AWS_MGN_API SsmParameterStoreParameter(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API SsmParameterStoreParameter& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>AWS Systems Manager Parameter Store parameter name.</p>
     */
    inline const Aws::String& GetParameterName() const{ return m_parameterName; }
    inline bool ParameterNameHasBeenSet() const { return m_parameterNameHasBeenSet; }
    inline void SetParameterName(const Aws::String& value) { m_parameterNameHasBeenSet = true; m_parameterName = value; }
    inline void SetParameterName(Aws::String&& value) { m_parameterNameHasBeenSet = true; m_parameterName = std::move(value); }
    inline void SetParameterName(const char* value) { m_parameterNameHasBeenSet = true; m_parameterName.assign(value); }
    inline SsmParameterStoreParameter& WithParameterName(const Aws::String& value) { SetParameterName(value); return *this;}
    inline SsmParameterStoreParameter& WithParameterName(Aws::String&& value) { SetParameterName(std::move(value)); return *this;}
    inline SsmParameterStoreParameter& WithParameterName(const char* value) { SetParameterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>AWS Systems Manager Parameter Store parameter type.</p>
     */
    inline const SsmParameterStoreParameterType& GetParameterType() const{ return m_parameterType; }
    inline bool ParameterTypeHasBeenSet() const { return m_parameterTypeHasBeenSet; }
    inline void SetParameterType(const SsmParameterStoreParameterType& value) { m_parameterTypeHasBeenSet = true; m_parameterType = value; }
    inline void SetParameterType(SsmParameterStoreParameterType&& value) { m_parameterTypeHasBeenSet = true; m_parameterType = std::move(value); }
    inline SsmParameterStoreParameter& WithParameterType(const SsmParameterStoreParameterType& value) { SetParameterType(value); return *this;}
    inline SsmParameterStoreParameter& WithParameterType(SsmParameterStoreParameterType&& value) { SetParameterType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_parameterName;
    bool m_parameterNameHasBeenSet = false;

    SsmParameterStoreParameterType m_parameterType;
    bool m_parameterTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace mgn
} // namespace Aws
