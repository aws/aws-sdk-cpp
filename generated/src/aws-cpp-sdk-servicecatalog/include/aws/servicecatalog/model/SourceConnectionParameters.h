/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/servicecatalog/ServiceCatalog_EXPORTS.h>
#include <aws/servicecatalog/model/CodeStarParameters.h>
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
   * <p>Provides connection details.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicecatalog-2015-12-10/SourceConnectionParameters">AWS
   * API Reference</a></p>
   */
  class SourceConnectionParameters
  {
  public:
    AWS_SERVICECATALOG_API SourceConnectionParameters();
    AWS_SERVICECATALOG_API SourceConnectionParameters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API SourceConnectionParameters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SERVICECATALOG_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Provides <code>ConnectionType</code> details.</p>
     */
    inline const CodeStarParameters& GetCodeStar() const{ return m_codeStar; }

    /**
     * <p>Provides <code>ConnectionType</code> details.</p>
     */
    inline bool CodeStarHasBeenSet() const { return m_codeStarHasBeenSet; }

    /**
     * <p>Provides <code>ConnectionType</code> details.</p>
     */
    inline void SetCodeStar(const CodeStarParameters& value) { m_codeStarHasBeenSet = true; m_codeStar = value; }

    /**
     * <p>Provides <code>ConnectionType</code> details.</p>
     */
    inline void SetCodeStar(CodeStarParameters&& value) { m_codeStarHasBeenSet = true; m_codeStar = std::move(value); }

    /**
     * <p>Provides <code>ConnectionType</code> details.</p>
     */
    inline SourceConnectionParameters& WithCodeStar(const CodeStarParameters& value) { SetCodeStar(value); return *this;}

    /**
     * <p>Provides <code>ConnectionType</code> details.</p>
     */
    inline SourceConnectionParameters& WithCodeStar(CodeStarParameters&& value) { SetCodeStar(std::move(value)); return *this;}

  private:

    CodeStarParameters m_codeStar;
    bool m_codeStarHasBeenSet = false;
  };

} // namespace Model
} // namespace ServiceCatalog
} // namespace Aws
