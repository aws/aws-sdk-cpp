﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The Amazon QuickSight configuration for an Amazon Q Business application that
   * uses QuickSight as the identity provider. For more information, see <a
   * href="https://docs.aws.amazon.com/amazonq/latest/qbusiness-ug/create-quicksight-integrated-application.html">Creating
   * an Amazon QuickSight integrated application</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/QuickSightConfiguration">AWS
   * API Reference</a></p>
   */
  class QuickSightConfiguration
  {
  public:
    AWS_QBUSINESS_API QuickSightConfiguration();
    AWS_QBUSINESS_API QuickSightConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API QuickSightConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon QuickSight namespace that is used as the identity provider. For
     * more information about QuickSight namespaces, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/developerguide/namespace-operations.html">Namespace
     * operations</a>. </p>
     */
    inline const Aws::String& GetClientNamespace() const{ return m_clientNamespace; }
    inline bool ClientNamespaceHasBeenSet() const { return m_clientNamespaceHasBeenSet; }
    inline void SetClientNamespace(const Aws::String& value) { m_clientNamespaceHasBeenSet = true; m_clientNamespace = value; }
    inline void SetClientNamespace(Aws::String&& value) { m_clientNamespaceHasBeenSet = true; m_clientNamespace = std::move(value); }
    inline void SetClientNamespace(const char* value) { m_clientNamespaceHasBeenSet = true; m_clientNamespace.assign(value); }
    inline QuickSightConfiguration& WithClientNamespace(const Aws::String& value) { SetClientNamespace(value); return *this;}
    inline QuickSightConfiguration& WithClientNamespace(Aws::String&& value) { SetClientNamespace(std::move(value)); return *this;}
    inline QuickSightConfiguration& WithClientNamespace(const char* value) { SetClientNamespace(value); return *this;}
    ///@}
  private:

    Aws::String m_clientNamespace;
    bool m_clientNamespaceHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
