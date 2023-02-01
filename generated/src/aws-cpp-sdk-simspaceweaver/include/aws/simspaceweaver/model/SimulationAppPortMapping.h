/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>

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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>A collection of TCP/UDP ports for a custom or service app.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/SimulationAppPortMapping">AWS
   * API Reference</a></p>
   */
  class SimulationAppPortMapping
  {
  public:
    AWS_SIMSPACEWEAVER_API SimulationAppPortMapping();
    AWS_SIMSPACEWEAVER_API SimulationAppPortMapping(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API SimulationAppPortMapping& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The TCP/UDP port number of the running app. SimSpace Weaver dynamically
     * assigns this port number when the app starts. SimSpace Weaver maps the
     * <code>Declared</code> port to the <code>Actual</code> port. Clients connect to
     * the app using the app's IP address and the <code>Actual</code> port number.</p>
     */
    inline int GetActual() const{ return m_actual; }

    /**
     * <p>The TCP/UDP port number of the running app. SimSpace Weaver dynamically
     * assigns this port number when the app starts. SimSpace Weaver maps the
     * <code>Declared</code> port to the <code>Actual</code> port. Clients connect to
     * the app using the app's IP address and the <code>Actual</code> port number.</p>
     */
    inline bool ActualHasBeenSet() const { return m_actualHasBeenSet; }

    /**
     * <p>The TCP/UDP port number of the running app. SimSpace Weaver dynamically
     * assigns this port number when the app starts. SimSpace Weaver maps the
     * <code>Declared</code> port to the <code>Actual</code> port. Clients connect to
     * the app using the app's IP address and the <code>Actual</code> port number.</p>
     */
    inline void SetActual(int value) { m_actualHasBeenSet = true; m_actual = value; }

    /**
     * <p>The TCP/UDP port number of the running app. SimSpace Weaver dynamically
     * assigns this port number when the app starts. SimSpace Weaver maps the
     * <code>Declared</code> port to the <code>Actual</code> port. Clients connect to
     * the app using the app's IP address and the <code>Actual</code> port number.</p>
     */
    inline SimulationAppPortMapping& WithActual(int value) { SetActual(value); return *this;}


    /**
     * <p>The TCP/UDP port number of the app, declared in the simulation schema.
     * SimSpace Weaver maps the <code>Declared</code> port to the <code>Actual</code>
     * port. The source code for the app should bind to the <code>Declared</code>
     * port.</p>
     */
    inline int GetDeclared() const{ return m_declared; }

    /**
     * <p>The TCP/UDP port number of the app, declared in the simulation schema.
     * SimSpace Weaver maps the <code>Declared</code> port to the <code>Actual</code>
     * port. The source code for the app should bind to the <code>Declared</code>
     * port.</p>
     */
    inline bool DeclaredHasBeenSet() const { return m_declaredHasBeenSet; }

    /**
     * <p>The TCP/UDP port number of the app, declared in the simulation schema.
     * SimSpace Weaver maps the <code>Declared</code> port to the <code>Actual</code>
     * port. The source code for the app should bind to the <code>Declared</code>
     * port.</p>
     */
    inline void SetDeclared(int value) { m_declaredHasBeenSet = true; m_declared = value; }

    /**
     * <p>The TCP/UDP port number of the app, declared in the simulation schema.
     * SimSpace Weaver maps the <code>Declared</code> port to the <code>Actual</code>
     * port. The source code for the app should bind to the <code>Declared</code>
     * port.</p>
     */
    inline SimulationAppPortMapping& WithDeclared(int value) { SetDeclared(value); return *this;}

  private:

    int m_actual;
    bool m_actualHasBeenSet = false;

    int m_declared;
    bool m_declaredHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
