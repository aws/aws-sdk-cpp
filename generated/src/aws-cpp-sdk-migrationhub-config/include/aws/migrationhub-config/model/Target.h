/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/migrationhub-config/MigrationHubConfig_EXPORTS.h>
#include <aws/migrationhub-config/model/TargetType.h>
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
namespace MigrationHubConfig
{
namespace Model
{

  /**
   * <p>The target parameter specifies the identifier to which the home region is
   * applied, which is always an <code>ACCOUNT</code>. It applies the home region to
   * the current <code>ACCOUNT</code>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/migrationhub-config-2019-06-30/Target">AWS
   * API Reference</a></p>
   */
  class Target
  {
  public:
    AWS_MIGRATIONHUBCONFIG_API Target() = default;
    AWS_MIGRATIONHUBCONFIG_API Target(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBCONFIG_API Target& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MIGRATIONHUBCONFIG_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The target type is always an <code>ACCOUNT</code>.</p>
     */
    inline TargetType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(TargetType value) { m_typeHasBeenSet = true; m_type = value; }
    inline Target& WithType(TargetType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>TargetID</code> is a 12-character identifier of the
     * <code>ACCOUNT</code> for which the control was created. (This must be the
     * current account.) </p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Target& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}
  private:

    TargetType m_type{TargetType::NOT_SET};
    bool m_typeHasBeenSet = false;

    Aws::String m_id;
    bool m_idHasBeenSet = false;
  };

} // namespace Model
} // namespace MigrationHubConfig
} // namespace Aws
