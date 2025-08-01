/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>

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
namespace WorkSpacesWeb
{
namespace Model
{

  class Unit
  {
  public:
    AWS_WORKSPACESWEB_API Unit() = default;
    AWS_WORKSPACESWEB_API Unit(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Unit& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  };

} // namespace Model
} // namespace WorkSpacesWeb
} // namespace Aws
